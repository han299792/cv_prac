#include <opencv2/opencv.hpp>
using namespace cv;

int main(){
  VideoCapture cap(0);

  if (!cap.isOpened()) {
    std::cerr << "Error: Could not open video capture." << std::endl;
    return -1;
  }
  Mat frame;
  while(true){
    cap >> frame;
    if (frame.empty()) {
      std::cerr << "Error: Could not read frame." << std::endl;
      break;
    }
    imshow("Video Capture", frame);
    if (waitKey(1) >= 27) {
      break;
    }
  }
  return 0;
}