// OpenCV_HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include <cv.h>
#include <cxcore.h>
#include <highgui.h>

int _tmain(int argc, _TCHAR* argv[])
{
	IplImage *img = cvLoadImage("clippy.jpg");
    cvNamedWindow("Image:",1);
    cvShowImage("Image:",img);

    cvWaitKey();
    cvDestroyWindow("Image:");
    cvReleaseImage(&img);

    return 0;
}

