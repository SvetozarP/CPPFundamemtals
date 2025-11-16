#include <iostream>

using namespace std;

void findLongestSequence(const int* arr, int size, int& bestValue, int& bestLength) {
    if (size == 0) {
        bestLength = 0;
        return;
    }

    bestLength = 1;
    bestValue = arr[0];
    int currentLength = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;
        }
        else {
            if (currentLength >= bestLength) {
                bestLength = currentLength;
                bestValue = arr[i - 1];
            }
            currentLength = 1;
        }
    }

    if (currentLength >= bestLength) {
        bestLength = currentLength;
        bestValue = arr[size - 1];
    }
}

void printSequence(int value, int length) {
    for (int i = 0; i < length; i++) {
        cout << value;
        if (i < length - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        return 0;
    }

    int* numbers = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int longestSequenceValue;
    int longestSequenceLength;

    findLongestSequence(numbers, n, longestSequenceValue, longestSequenceLength);
    printSequence(longestSequenceValue, longestSequenceLength);

    delete[] numbers;
    return 0;
}