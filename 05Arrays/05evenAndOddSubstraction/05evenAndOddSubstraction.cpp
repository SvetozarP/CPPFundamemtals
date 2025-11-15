#include <iostream>

using namespace std;

int calculateEvenOddSubtraction(const int* arr, int length)
{
	int difference = 0; // Use a single variable to store the result.

	// Loop through each number in the array.
	for (int i = 0; i < length; i++)
	{
		// Use a switch based on the result of (arr[i] & 1).
		// (number & 1) results in 0 if the number is even.
		// (number & 1) results in 1 if the number is odd.
		switch (arr[i] & 1)
		{
		case 0: // The number is EVEN
			difference += arr[i];
			break;

		case 1: // The number is ODD
			difference -= arr[i];
			break;
		}
	}
	return difference;
}


int main()
{
	int length;
	cin >> length;

	int* arr = new int[length];
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
	}

	int result = calculateEvenOddSubtraction(arr, length);
	cout << result << endl;
	delete[] arr;
	return 0;
}
