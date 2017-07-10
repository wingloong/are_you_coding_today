//#include "opencv2/opencv.hpp"
//#include <iostream>
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat girl = imread("girl.jpg");
//	namedWindow("动漫图");
//	imshow("动漫图", girl);
//
//	Mat image = imread("dota.jpg");
//	Mat logo = imread("dota_logo.jpg");
//
//	namedWindow("原画");
//	imshow("原画", image);
//
//	namedWindow("logo");
//	imshow("logo", logo);
//
//	Mat imageROI;
//	//imageROI = image(Rect(800,350, logo.cols, logo.rows));
//	imageROI=image(Range(350,350+logo.rows),Range(800,800+logo.cols));
//	addWeighted(imageROI, 0.5, logo, 0.3, 0., imageROI);
//	namedWindow("原画+logo");
//	imshow("原画+logo", image);
//	waitKey();
//
//
//
//
//
//
//	return 0;
//}