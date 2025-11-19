#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

bool isValid(const string& username) {
    if (username.length() < 3 || username.length() > 16) {
        return false;
    }

    for (char c : username) {
        if (!isalnum(c) && c != '-' && c != '_') {
            return false;
        }
    }

    return true;
}

int main() {
    string line;
    getline(cin, line);

    size_t startPosition = 0;
    size_t endPosition = line.find(", ");

    while (endPosition != string::npos) {
        string username = line.substr(startPosition, endPosition - startPosition);
        if (isValid(username)) {
            cout << username << endl;
        }
        startPosition = endPosition + 2;
        endPosition = line.find(", ", startPosition);
    }

    string lastUsername = line.substr(startPosition);
    if (isValid(lastUsername)) {
        cout << lastUsername << endl;
    }

    return 0;
}