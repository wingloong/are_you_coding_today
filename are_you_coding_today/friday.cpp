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
//	namedWindow("����ͼ");
//	imshow("����ͼ", girl);
//
//	Mat image = imread("dota.jpg");
//	Mat logo = imread("dota_logo.jpg");
//
//	namedWindow("ԭ��");
//	imshow("ԭ��", image);
//
//	namedWindow("logo");
//	imshow("logo", logo);
//
//	Mat imageROI;
//	//imageROI = image(Rect(800,350, logo.cols, logo.rows));
//	imageROI=image(Range(350,350+logo.rows),Range(800,800+logo.cols));
//	addWeighted(imageROI, 0.5, logo, 0.3, 0., imageROI);
//	namedWindow("ԭ��+logo");
//	imshow("ԭ��+logo", image);
//	waitKey();
//
//
//
//
//
//
//	return 0;
//}