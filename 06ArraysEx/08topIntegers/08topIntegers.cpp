#include <iostream>

using namespace std;

void readArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void printTopIntegers(const int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		bool isTopInteger = true;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] >= arr[i])
			{
				isTopInteger = false;
				break;
			}
		}
		if (isTopInteger)
		{
			cout << arr[i] << " ";
		}
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
	int* array = new int[arraySize];
	readArray(array, arraySize);
	printTopIntegers(array, arraySize);
	delete[] array;
	return 0;
}
