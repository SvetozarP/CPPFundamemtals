#include <iostream>
#include <cmath>

using namespace std;

int findAverage(const int* arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return floor(sum * 1.0 / size);
}

void printAboveAverage(const int* arr, int size, int average)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= average)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
	int n;
	cin >> n;
    if (n <= 0)
    {
        return 0;
	}
	int* numbers = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    int average = findAverage(numbers, n);
    printAboveAverage(numbers, n, average);
    delete[] numbers;
	return 0;
}
