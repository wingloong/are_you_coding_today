//#include "opencv2/opencv.hpp"
//#include <iostream>
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//using namespace cv;
//
//void createAlphaMat(Mat &mat)
//{
//	for (int i = 0; i < mat.rows; ++i)
//	{
//		for (int j = 0; j < mat.cols; ++j)
//		{
//			Vec4b &rgba = mat.at<Vec4b>(i, j);
//			rgba[0] = UCHAR_MAX;
//			rgba[1] = saturate_cast<uchar>((float(mat.cols - j)) / ((float)mat.cols)*UCHAR_MAX);
//			rgba[2] = saturate_cast<uchar>((float(mat.rows - i)) / ((float)mat.rows)*UCHAR_MAX);
//			rgba[3] = saturate_cast<uchar>(0.5*(rgba[1]+rgba[2]));
//
//		}
//	}
//}
//
//int main(int argc, int **grgv)
//{
//
//	Mat mat(480, 640, CV_8UC4);
//	createAlphaMat(mat);
//
//	vector<int> compression_params;
//	compression_params.push_back(IMWRITE_PNG_COMPRESSION);
//	compression_params.push_back(9);
//
//	try
//	{
//		imwrite("透明Alpha值图.png", mat, compression_params);
//		imshow("生成的PNG图", mat);
//		fprintf(stdout, "done!");
//		waitKey(0);
//
//	}
//	catch(runtime_error &ex)
//	{
//		fprintf(stderr, "sth wrong!",ex.what());
//	}
//
//
//	return 0;
//}