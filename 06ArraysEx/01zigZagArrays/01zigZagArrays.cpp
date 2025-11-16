#include <iostream>

using namespace std;

void populateArrays(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        int num1, num2;
        cin >> num1 >> num2;

        if (i % 2 == 0) {
            arr1[i] = num1;
            arr2[i] = num2;
        }
        else {
            arr1[i] = num2;
            arr2[i] = num1;
        }
    }
}

void printArray(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
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

    int* array1 = new int[n];
    int* array2 = new int[n];

    populateArrays(array1, array2, n);

    printArray(array1, n);
    printArray(array2, n);

    delete[] array1;
    delete[] array2;

    return 0;
}