#include <iostream>

using namespace std;

void printsign(int number)
{
	if (number > 0)
	{
		cout << "The number " << number << " is positive." << endl;
	}
	else if (number < 0)
	{
		cout << "The number " << number << " is negative." << endl;
	}
	else
	{
		cout << "The number " << number << " is zero." << endl;
	}
}

int main()
{
	int number;
	cin >> number;
	printsign(number);
	return 0;
}

