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
	//Mat arr= getAffineTransform(100,150);

	img = imread("maan (1).jpg");
	Point center = Point(img.cols / 2, img.rows / 2);
	double angle = -90.0;
	double scale = 0.6;
	
		Mat rot_mat = getRotationMatrix2D(center, angle, scale);
		cout << rot_mat.cols << " " << rot_mat.rows << endl;
		warpAffine(img, img_changed, rot_mat, img.size());
		imshow("img", img);
		imshow("img_changed", img_changed);
		
	
	waitKey(0);
}