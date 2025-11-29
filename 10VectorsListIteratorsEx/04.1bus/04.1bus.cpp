#include <iostream>
#include <vector>
#include <string>
#include <limits> 

using namespace std;

inline int convertToMinutes(const string& timeStr) {
    int hours = (timeStr[0] - '0') * 10 + (timeStr[1] - '0');
    int minutes = (timeStr[2] - '0') * 10 + (timeStr[3] - '0');

    return hours * 60 + minutes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numberOfBuses;
    cin >> numberOfBuses;

    vector<string> arrivalTimes(numberOfBuses);
    for (int i = 0; i < numberOfBuses; ++i) {
        cin >> arrivalTimes[i];
    }

    string trainDepartureTimeStr;
    cin >> trainDepartureTimeStr;

    int trainDepartureInMinutes = convertToMinutes(trainDepartureTimeStr);

    int bestBusArrivalInMinutes = -1; 
    int bestBusIndex = -1;            

    for (int i = 0; i < numberOfBuses; ++i) {
        int busTimeInMinutes = convertToMinutes(arrivalTimes[i]);

        if (busTimeInMinutes <= trainDepartureInMinutes) {
            if (bestBusArrivalInMinutes == -1 || busTimeInMinutes > bestBusArrivalInMinutes) {
                bestBusArrivalInMinutes = busTimeInMinutes;
                bestBusIndex = i; 
            }
        }
    }

    cout << bestBusIndex + 1 << endl;

    return 0;
}