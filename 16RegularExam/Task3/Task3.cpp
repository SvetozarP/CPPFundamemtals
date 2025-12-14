#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void printTrain(const vector<string>& train) {
    cout << "|";
    for (const string& content : train) {
        if (content == "empty") {
            cout << " |";
        }
        else {
            cout << content << "|";
        }
    }
    cout << endl;
}

int main() {
    vector<string> train;
    string line;

    while (getline(cin, line) && line != "end") {
        train.push_back(line);
    }

    // Process commands
    while (getline(cin, line) && line != "E") {
        stringstream ss(line);
        char command;
        ss >> command;

        if (command == 'P') {
            printTrain(train);
        }
        else if (command == 'M') {
            int oldWagonPosition, newWagonPosition;
            ss >> oldWagonPosition >> newWagonPosition;

            int oldIndex = oldWagonPosition - 1;
            int newIndex = newWagonPosition - 1;

            string movedWagonContent = train[oldIndex];

            train.erase(train.begin() + oldIndex);

            train.insert(train.begin() + newIndex, movedWagonContent);

            printTrain(train);
        }
        else if (command == 'L') {
            int wagonPosition;
            ss >> wagonPosition;

            int indexToRemove = wagonPosition - 1;

            train.erase(train.begin() + indexToRemove);

            printTrain(train);
        }
    }

    return 0;
}