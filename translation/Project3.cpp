#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include<stdio.h>
#include<iostream>
using namespace cv;
using namespace std;
int main() {
	Mat img;
	//Mat img_changed;
	//Mat arr= getAffineTransform(100,150);

	img = imread("maan (1).jpg");
	
	Point2f imgTri[4];
	imgTri[0] = Point2f(0,0);
	imgTri[1] = Point2f(0,img.rows);
	//imgTri[2] = Point2f(img.rows, img.cols);
	imgTri[2] = Point2f(img.cols,0 );
	Point2f dstTri[4];
	dstTri[0] = Point2f(50, 100);
	dstTri[1] = Point2f(50,img.rows);
	//dstTri[2] = Point2f(img.rows, img.cols);
	dstTri[2] = Point2f(img.cols,100);
	
	/*
	Point2f imgTri[4];
	imgTri[0] = Point2f(0, 0);
	imgTri[1] = Point2f(img.cols, img.rows);
	//imgTri[2] = Point2f(img.rows, img.cols);
	imgTri[2] = Point2f(img.cols, 0);
	Point2f dstTri[4];
	dstTri[0] = Point2f(50, 100);
	dstTri[1] = Point2f(img.cols-50, img.rows-100);
	//dstTri[2] = Point2f(img.rows, img.cols);
	dstTri[2] = Point2f(img.cols-50, 100);
	*/
	Mat warp_mat = getAffineTransform(imgTri, dstTri);
	//circle(img, Point2f(0,0), 500, (0, 0, 255), -1);
	//long long int arr[2][3];
	
	// Mat A(2, 3, CV_64FC1, [1, 0, 50, 0, 1, 100]);
	
	Mat img_changed;
	warpAffine(img, img_changed, warp_mat, img_changed.size());
	//circle(img_changed, Point2f(0, 0), 5, (0, 0, 255), -1);
	
	imshow("img", img);
		imshow("img_changed", img_changed);
	
	waitKey(0);
}