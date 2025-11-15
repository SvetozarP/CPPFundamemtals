#include <iostream>
#include <string>

using namespace std;


bool checkArrays(const int* arr1, const int* arr2, int length, int& sum, int& diffIndex) {
    sum = 0; 
    for (int i = 0; i < length; i++) {
        
        if (arr1[i] != arr2[i]) {
            diffIndex = i;  
            return false;   
        }
        sum += arr1[i];
    }
    return true;
}

int main() {

    int length;
    cin >> length;

    if (length <= 0) {
        cout << "Arrays are identical. Sum: 0" << endl;
        return 0;
    }

    int* arr1 = new int[length];
    int* arr2 = new int[length];

    for (int i = 0; i < length; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < length; i++) {
        cin >> arr2[i];
    }

    int sumResult;
    int differenceIndex;

    bool areEqual = checkArrays(arr1, arr2, length, sumResult, differenceIndex);

    if (areEqual) {
        cout << "Arrays are identical. Sum: " << sumResult << endl;
    }
    else {
        cout << "Arrays are not identical. Found difference at " << differenceIndex << " index." << endl;
    }

    delete[] arr1;
    delete[] arr2;

    return 0;
}