#include "opencv2/opencv.hpp"
#include <iostream>
#include <iostream>
#include <fstream>

using namespace std;
using namespace cv;

#define WINDOW_NAME "show window"

const int g_nMaxAlphaValue = 100;
int g_nAlphaValueSlider;
double g_dAlphaValue;
double g_dBetaValue;

Mat g_srcImage1;
Mat g_srcImage2;
Mat g_dstImage;

void on_Trackerbar(int, void *)
{
	g_dAlphaValue = (double)g_nAlphaValueSlider / g_nMaxAlphaValue;
	g_dBetaValue = 1.0 - g_dAlphaValue;
	addWeighted(g_srcImage1, g_dAlphaValue, g_srcImage2, g_dBetaValue, 0.0, g_dstImage);
	imshow(WINDOW_NAME, g_dstImage);
}

int main()
{

	g_srcImage1 = imread("2.jpg");
	g_srcImage2 = imread("3.jpg");
	if (!g_srcImage1.data||!g_srcImage2.data)
		cerr << "image read error" << endl;

	g_nAlphaValueSlider = 70;

	namedWindow(WINDOW_NAME);

	char Trackbarname[50];
	sprintf(Trackbarname, "Í¸Ã÷Öµ %d", g_nMaxAlphaValue);
	createTrackbar(Trackbarname, WINDOW_NAME, &g_nAlphaValueSlider, g_nMaxAlphaValue, on_Trackerbar);

	on_Trackerbar(g_nAlphaValueSlider, 0);
	waitKey(0);



	return 0;
}