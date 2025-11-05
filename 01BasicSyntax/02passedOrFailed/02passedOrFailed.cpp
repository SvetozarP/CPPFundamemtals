#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	double number;
	cin >> number;

	if (number >= 3.00)
	{
		cout << "Passed!" << endl;
	}
	else
	{
		cout << "Failed!" << endl;
	}
	return 0;
}
