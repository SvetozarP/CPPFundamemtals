#include <iostream>
#include <algorithm>

using namespace std;

void readArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void calculateAverage(int arr[], int size, double &average)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	average = static_cast<double>(sum) / size;
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arraySize;
	cin >> arraySize;
	double arrayAverage;
	int* arr = new int[arraySize];
	readArray(arr, arraySize);
	calculateAverage(arr, arraySize, arrayAverage);
	sort(arr, arr + arraySize, greater<int>());
	bool found = false;
	for (int i = 0; i < arraySize; i++)
	{
		if (arr[i] < arrayAverage && arr[i] % 2 == 0)
		{
			cout << arr[i] << " ";
			found = true;
		}
	}
	if (!found)
	{
		cout << "No";
	}
	delete[] arr;
	cout << endl;
	return 0;
}
