#include <main.h>
#include <opencv2/videoio.hpp>

using namespace std;
using namespace cv;
int main()
{
    cout<< "Hello World \n";
    VideoCapture cap{VideoCapture(0)};
    int num{3};
    cout << num << endl;
    return 0;
}