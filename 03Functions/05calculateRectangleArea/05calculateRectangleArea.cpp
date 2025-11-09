#include <iostream>

using namespace std;

void calculateRectangleArea(double width, double height) {
    double area = width * height;
    cout << area << endl;
}

int main()
{
	int width, height;
	cin >> width >> height;
	calculateRectangleArea(width, height);
	return 0;
}
