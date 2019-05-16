#include<iostream>
#include<stdlib.h>
#include<opencv2\objdetect\objdetect.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<stdio.h>
#include <opencv2/core.hpp>
using namespace std;
using namespace cv;
int main()
{
	CascadeClassifier faceDetection;
	// cout<<faceDetection.load("C:\\ABC\\haarcascade_frontalface_default.xml");

	if(!faceDetection.load("C:\\ABC\\haarcascade_frontalface_default.xml"))
	{
		cout << "file not laoded";
		
		
	}
	Mat img = imread("image2.jpg");
	imshow("original", img);
	vector<Rect> faces;
	faceDetection.detectMultiScale(img, faces);
	for (int i = 0; i < faces.size(); i++)
	{
		Point center(faces[i].x + faces[i].width / 2, faces[i].y + faces[i].height / 2);
		ellipse(img, center, Size(faces[i].width / 2, faces[i].height / 2), 0, 0, 360, Scalar(255, 0, 255), 4);
		//circle(img, center, 10, Scalar(255, 0, 0), -1, 8);
		
	}
	imshow("face", img);
	waitKey(0);
	

	return 0;
}