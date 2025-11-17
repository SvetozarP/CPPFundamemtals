#include <iostream>

using namespace std;

void readArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
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

void rotateArray(const int* arr, int size, int k, int* result)
{
	for (int i = 0; i < size; i++)
	{
		result[i] = arr[(i + k) % size];
	}
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
	int k;
	cin >> k;
	k = k % arraySize;
	int* rotatedArray = new int[arraySize];
	rotateArray(array, arraySize, k, rotatedArray);
	printArray(rotatedArray, arraySize);
	delete[] array;
	delete[] rotatedArray;
	return 0;
}
