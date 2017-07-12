#include "opencv2/opencv.hpp"
#include <iostream>
#include <iostream>
#include <fstream>

using namespace std;
using namespace cv;

#define WINDOW_NAME "show window"

void on_MouseHandle(int event, int x, int y, int flags, void* param);
void drawRectangle(Mat &img, Rect box);

Rect g_rectangle;
bool g_bDrawBox = false;
RNG g_rng(12345);

int main()
{
	g_rectangle = Rect(-1, -1, 0, 0);
	Mat srcImg(600, 800, CV_8UC3);
	srcImg = Scalar::all(0);

	Mat tempImg;
	

	setMouseCallback(WINDOW_NAME, on_MouseHandle, (void*)&srcImg);

	while (true)
	{
		srcImg.copyTo(tempImg);
		if (g_bDrawBox)
			drawRectangle(tempImg, g_rectangle);
		imshow(WINDOW_NAME, srcImg);
		if (waitKey(10) == 27) break;
	}

	return 0;
}

void on_MouseHandle(int event, int x, int y, int flags, void* param)
{
	Mat &image = *(Mat *)param;
	switch (event)
	{
	case EVENT_MOUSEMOVE:
	{
		if (g_bDrawBox)
		{
			g_rectangle.width = x - g_rectangle.x;
			g_rectangle.height = y - g_rectangle.y;
		}
	}
	break;
	case EVENT_LBUTTONDOWN:
	{
		g_bDrawBox = true;
		g_rectangle = Rect(x, y, 0, 0);
	}
	break;
	case EVENT_LBUTTONUP:
	{
		g_bDrawBox = false;
		if (g_rectangle.width < 0)
		{
			g_rectangle.x += g_rectangle.width;
			g_rectangle.width *= -1;
			
		}
		if (g_rectangle.height< 0)
		{
			g_rectangle.y += g_rectangle.height;
			g_rectangle.height *= -1;
			
		}
		drawRectangle(image, g_rectangle);
		
	}
	break;
	}
}

void drawRectangle(Mat &img, Rect box)
{
	rectangle(img, box, Scalar::all(-1));
}