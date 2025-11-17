#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

void readArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

int findMinimumDifference(const int* arr, int size)
{
	int minDifference = INT_MAX;

	for (int i = 0; i < size - 1; i++)
	{
		int currentDifference = abs(arr[i + 1] - arr[i]);
		if (currentDifference < minDifference)
		{
			minDifference = currentDifference;
		}
	}
	return minDifference;
}

int main()
{
	int arraySize;
	cin >> arraySize;

	if (arraySize <= 0)
	{
		return 0;
	}

	if (arraySize == 1)
	{
		
		cout << 0 << endl;
		return 0;
	}

	int* array = new int[arraySize];
	readArray(array, arraySize);

	sort(array, array + arraySize);

	int result = findMinimumDifference(array, arraySize);

	cout << result << endl;

	delete[] array;

	return 0;
}