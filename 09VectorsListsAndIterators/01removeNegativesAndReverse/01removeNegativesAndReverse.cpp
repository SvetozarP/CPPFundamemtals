#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std; 

int main() {
    string line;
    getline(cin, line);

    vector<int> numbers;

    string currentNumStr;
    for (char c : line) {
        if (c == ' ') {
            int num = stoi(currentNumStr);
            if (num >= 0) {
                numbers.push_back(num);
            }
            currentNumStr = "";
        }
        else {
            currentNumStr += c;
        }
    }
    if (!currentNumStr.empty()) {
        int num = stoi(currentNumStr);
        if (num >= 0) {
            numbers.push_back(num);
        }
    }

    if (numbers.empty()) {
        cout << "empty" << endl;
    }
    else {
        reverse(numbers.begin(), numbers.end());

        for (int i = 0; i < numbers.size(); ++i) {
            cout << numbers[i] << (i == numbers.size() - 1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}