#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
using namespace std;
int main() {
	Mat img;
	Mat img_resize;

	img = imread("image.png");
	//circle(img, Point2f(0, 0), 500, (0, 0, 255), -1);
	resize(img,img_resize, Size(), 0.5, 0.5,INTER_AREA);
	

	namedWindow("img_original", WINDOW_AUTOSIZE);
	imshow("img_original", img);
	namedWindow("img_resize", WINDOW_AUTOSIZE);
	imshow("img_resize", img_resize);
	waitKey(0);
}