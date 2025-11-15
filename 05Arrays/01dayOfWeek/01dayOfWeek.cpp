#include <iostream>
#include <string>

using namespace std;

void printDayOfWeek(int dayNumber) {
    string days[] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };

    if (dayNumber >= 1 && dayNumber <= 7) {
        cout << days[dayNumber - 1] << endl;
    }
    else {
        cout << "Invalid day!" << endl;
    }
}

int main() {
    int day;
    cin >> day;
    printDayOfWeek(day);
    return 0;
}