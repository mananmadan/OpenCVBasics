#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include<stdio.h>
#include<iostream>
using namespace cv;
using namespace std;
Mat img;
Mat img_changed;
Mat img_changed_2;
Mat kernel;//declaring the mask
Mat dialated_image;
int kernel_size;
int erosionsize = 0;
int dialationsize = 0;
void erosion(int, void*)
{
	Mat element = getStructuringElement(MORPH_RECT, Size(2*erosionsize+1, 2*erosionsize+1));
	Mat element2 = getStructuringElement(MORPH_CROSS, Size(2*erosionsize+1, 2*erosionsize+1));

	erode(img, img_changed, element);

	erode(img, img_changed_2, element2);
	imshow("erodedimage", img_changed);
	imshow("erodedimageusingcross", img_changed_2);

}
void dialation(int, void*)
{
	Mat element = getStructuringElement(MORPH_RECT, Size(2 * dialationsize + 1, 2 * dialationsize + 1));
	dilate(img, dialated_image, element);
	imshow("dialationimage", dialated_image);

}
int main() {
	

img = imread("morph_dilate.png");
imshow("originalimage", img);
namedWindow("erodedimage", WINDOW_AUTOSIZE);
createTrackbar("kernelsize", "erodedimage", &erosionsize, 181, erosion);
namedWindow("dialationimage",WINDOW_AUTOSIZE);
createTrackbar("kernelsize", "dialationimage", &dialationsize, 71, dialation);
erosion(0, 0);
dialation(0, 0);
waitKey(0);
	return 0;
}



