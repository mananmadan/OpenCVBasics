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
	Mat img_changed1;
	Mat kernel;//declaring the mask
	Mat gaussian_blur;
	Mat median_blur;
	Mat bilateral_filter;
	int kernel_size;

	img = imread("maan (1).jpg");
	imshow("img_original", img);
		blur(img, img_changed1, Size(5, 5), Point(-1, -1)); 	
		medianBlur(img, median_blur, 7);
		imshow("median blur", median_blur);
		imshow("blurfunction", img_changed1);
		for (int i = 0; i < 105; i = i + 2) {
		  bilateralFilter(img, bilateral_filter, i, i * 2, i / 2);
		  imshow("bilateralfilter", bilateral_filter);
		  waitKey(5);
		}
		for (int i = 1; i < 50; i = i + 2)
	    {
		  GaussianBlur(img, gaussian_blur, Size(i, i), 0, 0);
		  imshow("gaussianblur", gaussian_blur);
		  waitKey(1000);
	    }
	
	
	waitKey(0);
	return 0;
	   	 
}