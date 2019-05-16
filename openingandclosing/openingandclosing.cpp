#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include<stdio.h>
#include<iostream>
using namespace cv;
using namespace std;
int kernelsize;
int kernelsize_C;
Mat img;
Mat img_opening;
Mat img_closing;
void opening(int, void*)
{
	Mat element = getStructuringElement(MORPH_RECT, Size(2 * kernelsize + 1, 2 * kernelsize + 1));
	morphologyEx(img, img_opening,2 , element);
	imshow("Opening", img_opening);
      
}

void closing(int, void*)
{
	Mat element = getStructuringElement(MORPH_RECT, Size(2 * kernelsize_C + 1, 2 * kernelsize_C + 1));
	morphologyEx(img, img_closing, 3, element);
	imshow("Closing", img_closing);

}

int main()
{
	 img = imread("Untitled.png");
	namedWindow("Opening", WINDOW_AUTOSIZE);
	createTrackbar("kernelsize", "Opening", &kernelsize, 150, opening);
	namedWindow("Closing", WINDOW_AUTOSIZE);
	createTrackbar("kernelsize_c", "Closing", &kernelsize_C,150,closing);
	opening(0, 0);
	closing(0, 0);
	waitKey(0);
	return 0;


}