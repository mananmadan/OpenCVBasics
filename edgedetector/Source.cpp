#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include<stdio.h>
#include<iostream>
using namespace cv;
using namespace std;
int main() {
	Mat img;
	Mat edge_detecttion;
	Mat greyscale_img;
	Mat greyscale__blur_img;
	Mat dst;
	//Mat arr= getAffineTransform(100,150);

	img = imread("coin.jpg");
	cvtColor(img,greyscale_img,COLOR_BGR2GRAY);
	blur(greyscale_img, greyscale__blur_img, Size(3, 3));
	
		Canny(greyscale__blur_img, greyscale__blur_img, 100, 300, 3);
		dst = Scalar::all(0);
		img.copyTo(dst, greyscale__blur_img);
		imshow("dst", dst);
		imshow("greyscale_blur_image", greyscale__blur_img);
		
	
	
	imshow("greyscale_img", greyscale_img);
	imshow("original", img);
	waitKey(0);
}