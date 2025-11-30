#include <iostream>
#include <vector>

using namespace std;

void readVector(vector<int>& vec, int n)
{
	for (int i = 0; i < n; ++i)
	{
		int value;
		cin >> value;
		vec.push_back(value);
	}
}

void findAverage(const vector<int>& vec, double& average)
{
	int sum = 0;
	for (int value : vec)
	{
		sum += value;
	}
	average = static_cast<double>(sum) / vec.size();
}

void sumNumbersEvenPositionsBelowAverage(const vector<int>& vec, double average, int& sum)
{
	sum = 0;
	for (size_t i = 0; i < vec.size(); i += 2)
	{
		if (vec[i] <= average)
		{
			sum += vec[i];
		}
	}
}

void sumNumbersOddPositionsBelowAverage(const vector<int>& vec, double average, int& sum)
{
	sum = 0;
	for (size_t i = 1; i < vec.size(); i += 2)
	{
		if (vec[i] <= average)
		{
			sum += vec[i];
		}
	}
}

int main()
{
	int vectorSize;
	cin >> vectorSize;
	vector<int> numbers;
	readVector(numbers, vectorSize);
	double average;
	findAverage(numbers, average);
	int sumEvenPositions;
	sumNumbersEvenPositionsBelowAverage(numbers, average, sumEvenPositions);
	int sumOddPositions;
	sumNumbersOddPositionsBelowAverage(numbers, average, sumOddPositions);
	cout << sumEvenPositions * sumOddPositions << endl;
	return 0;
}

