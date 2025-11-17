#include <iostream>

using namespace std;

void readArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void findMagicPairs(const int* arr, int size, int magicSum)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] +  arr[j] == magicSum)
			{
				cout << arr[i] << " " << arr[j] << endl;
			}
		}
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
	int magicSum;
	cin >> magicSum;
	findMagicPairs(array, arraySize, magicSum);
	delete[] array;
	return 0;

}
