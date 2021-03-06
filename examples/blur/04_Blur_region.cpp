#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

int main( int argc, char** argv ) {

	// Create matrix from image
	Mat imageSrc = imread("lena1.png", CV_LOAD_IMAGE_COLOR);

	// Create windows
	namedWindow("My window 1", WINDOW_AUTOSIZE);
	namedWindow("My window 2", WINDOW_AUTOSIZE);

	// Set kernel size - Odd
	int kernelSize=21;

	// Apply blur (any algorithm)
	Mat imageDest;
	Rect region(0, 0, 200, 200);
	medianBlur( imageSrc(region), imageDest, kernelSize);

	// Show images in windows
	imshow("My window 1", imageSrc);
	imshow("My window 2", imageDest);

	waitKey(0);
	return 0;
}

