#include <iostream>

using namespace std;

void printSmallestNumber(int num1, int num2, int num3) {
    if (num1 <= num2 && num1 <= num3) {
        cout << num1 << endl;
    }
    else if (num2 <= num1 && num2 <= num3) {
        cout << num2 << endl;
    }
    else {
        cout << num3 << endl;
    }
}

int main() {
    int firstNum, secondNum, thirdNum;
	cin >> firstNum >> secondNum >> thirdNum;

    printSmallestNumber(firstNum, secondNum, thirdNum);


    return 0;
}