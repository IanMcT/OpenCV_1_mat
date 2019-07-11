#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::Mat image0;

	image0.create(480,640, CV_8UC1);

	image0.setTo(0);

	cv::Point center(image0.cols /2, image0.rows /2);
	int radius = image0.rows /2;

	cv::circle(image0,
		center,
		radius,
		128,
		3);

	cv::imshow("image0",image0);
	cv::waitKey();
}
