#include <iostream>

using namespace std;

void closestPointToOrigin(double x1, double y1, double x2, double y2, double &cx, double &cy)
{
	double dist1 = x1 * x1 + y1 * y1;
	double dist2 = x2 * x2 + y2 * y2;
	if (dist1 <= dist2)
	{
		cx = x1;
		cy = y1;
	}
	else
	{
		cx = x2;
		cy = y2;
	}
}

int main()
{
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double cx, cy;
	closestPointToOrigin(x1, y1, x2, y2, cx, cy);
	cout << "(" << cx << ", " << cy << ")" << endl;
	return 0;
}
