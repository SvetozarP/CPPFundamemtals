#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    long long totalSum = 0;

    int minLength = min(str1.length(), str2.length());
    int maxLength = max(str1.length(), str2.length());

    for (int i = 0; i < minLength; i++) {
        totalSum += str1[i] * str2[i];
    }

    for (int i = minLength; i < maxLength; i++) {
        if (str1.length() > str2.length()) {
            totalSum += str1[i];
        }
        else {
            totalSum += str2[i];
        }
    }

    cout << totalSum << endl;

    return 0;
}