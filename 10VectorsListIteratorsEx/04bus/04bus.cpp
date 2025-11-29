#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readVector(vector<string>& vec, int size) {
	for (int i = 0; i < size; i++) {
		cin >> vec[i];
	}
}

void convertToMinutes(const string& timeStr, int& totalMinutes) {
	int hours = stoi(timeStr.substr(0, 2));
	int minutes = stoi(timeStr.substr(2, 2));
	totalMinutes = hours * 60 + minutes;
}

int main()
{
    int busArrivalTimes;
	cin >> busArrivalTimes;
	vector<string> arrivalTimes(busArrivalTimes);
	readVector(arrivalTimes, busArrivalTimes);
	string trainArrivalTime;
	cin >> trainArrivalTime;
	int trainArrivalInMinutes;
	convertToMinutes(trainArrivalTime, trainArrivalInMinutes);
	int closestBusTime = -1;
	int busIndex = 0;
	int bestBusIndex = -1;
	for (const string& busTimeStr : arrivalTimes) {
		busIndex++;
		int busTimeInMinutes;
		convertToMinutes(busTimeStr, busTimeInMinutes);
		if (busTimeInMinutes <= trainArrivalInMinutes) {
			if (closestBusTime == -1 || busTimeInMinutes > closestBusTime) {
				closestBusTime = busTimeInMinutes;
				bestBusIndex = busIndex;
			}
		}
	}
	cout << bestBusIndex << endl;
	return 0;
}
