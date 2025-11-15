#include <iostream>

using namespace std;

void printReverse(int* arr, int length)
{
	for (int i = length - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
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
	printReverse(arr, length);
	
	delete[] arr;
	return 0;

}
