#include <iostream>

using namespace std;

void readArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void constructCartesianProduct(const int* arr, int size, int* result)
{
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			result[index++] = arr[i] * arr[j];
		}
	}
}

void printArray(const int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arraySize;
	cin >> arraySize;
	if (arraySize <= 0)
	{
		return 0;
	}
	int* arrayA = new int[arraySize];

	readArray(arrayA, arraySize);

	int resultsSize = arraySize * arraySize;
	int* results = new int[resultsSize];
	constructCartesianProduct(arrayA, arraySize, results);
	printArray(results, resultsSize);
	delete[] arrayA;
	delete[] results;
	return 0;
}
