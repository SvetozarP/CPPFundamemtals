#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    vector<int> numbers;
    string currentNumStr;
    for (char c : line) {
        if (c == ' ') {
            if (!currentNumStr.empty()) {
                numbers.push_back(stoi(currentNumStr));
                currentNumStr = "";
            }
        }
        else {
            currentNumStr += c;
        }
    }
    if (!currentNumStr.empty()) {
        numbers.push_back(stoi(currentNumStr));
    }

    vector<int> result_sums;

    int left = 0;
    int right = numbers.size() - 1;

    while (left <= right) {
        if (left == right) {
            result_sums.push_back(numbers[left]);
        }
        else {
            result_sums.push_back(numbers[left] + numbers[right]);
        }
        left++;
        right--;
    }

    for (size_t i = 0; i < result_sums.size(); ++i) {
        cout << result_sums[i] << (i == result_sums.size() - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}