#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int sumOfEvens(string number)
{
	int sum = 0;
	for (char digitChar : number)
	{
		int digit = digitChar - '0';
		if (digit % 2 == 0)
		{
			sum += digit;
		}
	}
	return sum;
}

int sumOfOdds(string number)
{
	int sum = 0;
	for (char digitChar : number)
	{
		int digit = digitChar - '0';
		if (digit % 2 != 0)
		{
			sum += digit;
		}
	}
	return sum;
}


int main()
{
	int number;
	cin >> number;
	string numberStr = to_string(abs(number));
	int sumEvens = sumOfEvens(numberStr);
	int sumOdds = sumOfOdds(numberStr);
	cout << sumEvens * sumOdds << endl;
	return 0;
}
