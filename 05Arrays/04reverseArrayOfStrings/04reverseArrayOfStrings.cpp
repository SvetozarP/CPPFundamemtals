#include <iostream>
#include <string>
#include <utility> 

using namespace std;


void reverseArray(string* elements, int size) {

    int start = 0;
    int end = size - 1;


    while (start < end) {

        swap(elements[start], elements[end]);


        start++;
        end--;
    }
}


void printArray(const string* elements, int size) {

    for (int i = 0; i < size; ++i) {
        cout << elements[i];

        if (i < size - 1) {
            cout << " ";
        }
    }

    cout << endl;
}

int main() {
    int size;


    cin >> size;


    if (size <= 0) {
        return 0;
    }

    
    string* stringArray = new string[size];

    for (int i = 0; i < size; ++i) {
        cin >> stringArray[i];
    }

    reverseArray(stringArray, size);

    printArray(stringArray, size);

    delete[] stringArray;

    return 0;
}