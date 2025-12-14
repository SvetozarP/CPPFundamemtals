#include <iostream>
#include <vector>
#include <iomanip>
#include <numeric>

using namespace std;

int main() {

    int days;
    cin >> days;

    int pointsNeeded;
    cin >> pointsNeeded;

    int swimmersCount;
    cin >> swimmersCount;

    double hotelPricePerDayPerSwimmer;
    cin >> hotelPricePerDayPerSwimmer;

    double participationFeePerSwimmer;
    cin >> participationFeePerSwimmer;

    double totalExpenses = 0.0;
    totalExpenses += (swimmersCount * hotelPricePerDayPerSwimmer * days);
    totalExpenses += (swimmersCount * participationFeePerSwimmer);

    double totalPoints = 0.0;
    double lastDayPoints = 0.0;

    for (int i = 0; i < days; ++i) {
        double currentDayPoints;
        cin >> currentDayPoints;

        if (i == 0) {
            totalPoints += currentDayPoints;
        }
        else {
            totalPoints += currentDayPoints;
            totalPoints += (lastDayPoints * 0.05);
        }
        lastDayPoints = currentDayPoints;
    }

    bool championshipSuccessful = false;
    if (totalPoints >= pointsNeeded) {
        championshipSuccessful = true;
    }

    double sponsorShare = 0.0;
    if (championshipSuccessful) {
        sponsorShare = totalExpenses * 0.25;
    }
    else {
        sponsorShare = totalExpenses * 0.10;
    }

    double moneyLeftToPay = totalExpenses - sponsorShare;

    cout << fixed << setprecision(2);
    cout << "Money left to pay: " << moneyLeftToPay << " BGN." << endl;
    if (championshipSuccessful) {
        cout << "The championship was successful!" << endl;
    }
    else {
        cout << "The championship was not successful." << endl;
    }

    return 0;
}