#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include<stdio.h>
#include<iostream>
using namespace cv;
using namespace std;
int main() {
	Mat img;
	Mat img_changed;
	Mat kernel;//declaring the mask
	int kernel_size;

	img = imread("maan (1).jpg");
	Point anchor = Point(-1,-1);
	double delta = 0;
	int ddepth = -1;
	int ind = 0;
		
		// Update kernel size for a normalized box filter
	kernel_size = 5;
		kernel = Mat::ones(kernel_size, kernel_size, CV_32F) / (float)(kernel_size*kernel_size);
		// Apply filter
		filter2D(img, img_changed, ddepth, kernel, anchor, delta, BORDER_DEFAULT);
		imshow("img_original", img);
		imshow("masked image", img_changed);
		
		waitKey(0);
	return 0;
	


	
	
	
	}