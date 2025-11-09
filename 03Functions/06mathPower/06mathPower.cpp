#include <iostream>

using namespace std;

void calcNumberPower(int number, int power)
{
    int result = 1;
    for (int i = 0; i < power; ++i)
    {
        result *= number;
    }
    cout << result << endl;
}

int main()
{
	int number, power;
	cin >> number >> power;
	calcNumberPower(number, power);
	return 0;
}
