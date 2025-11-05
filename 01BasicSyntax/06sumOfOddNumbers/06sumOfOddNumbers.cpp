#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int currentNumber = 0;
	int sum = 0;
	for (int i = 1; i <= 300; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << endl;
			sum += i;
			currentNumber++;
		}
		if (currentNumber == n)
		{
			break;
		}
	}
	cout << "Sum: " << sum << endl;

	return 0;
}
