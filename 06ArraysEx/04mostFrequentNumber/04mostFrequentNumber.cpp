#include <iostream>
#include <algorithm>

using namespace std;

int findMaxFrequency(const int* arr, int size) {
    if (size == 0) {
        return 0;
    }

    int maxCount = 0;
    int i = 0;
    while (i < size) {
        int j = i;
        while (j < size && arr[j] == arr[i]) {
            j++;
        }

        int currentCount = j - i;
        if (currentCount > maxCount) {
            maxCount = currentCount;
        }

        i = j;
    }
    return maxCount;
}

void printNumbersWithFrequency(const int* arr, int size, int targetFrequency) {
    if (size == 0 || targetFrequency == 0) {
        return;
    }

    int i = 0;
    while (i < size) {
        int j = i;
        while (j < size && arr[j] == arr[i]) {
            j++;
        }

        int currentCount = j - i;
        if (currentCount == targetFrequency) {
            cout << arr[i] << " ";
        }

        i = j;
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

    sort(numbers, numbers + n);

    int maxFreq = findMaxFrequency(numbers, n);

    printNumbersWithFrequency(numbers, n, maxFreq);

    delete[] numbers;
    return 0;
}