#include <iostream>

using namespace std;

int calculateEvenSum(const int* numbers, int length)
{
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		if (numbers[i] % 2 == 0)
		{
			sum += numbers[i];
		}
	}
	return sum;
}

int main()
{
	int length;
	cin >> length;

	if (length <= 0) {
		cout << 0 << endl;
		return 0;
	}

	int* numbers = new int[length];

	for (int i = 0; i < length; i++)
	{
		cin >> numbers[i];
	}

	int sum = calculateEvenSum(numbers, length);

	cout << sum << endl;

	delete[] numbers;
	return 0;
}