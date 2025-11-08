#include <iostream>

using namespace std;

int main() {
 
    double num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if (num1 == 0 || num2 == 0 || num3 == 0) {
        std::cout << "+" << std::endl;
        return 0;
    }

    int negativeCount = 0;

    if (num1 < 0) {
        negativeCount++;
    }
    if (num2 < 0) {
        negativeCount++;
    }
    if (num3 < 0) {
        negativeCount++;
    }

    if (negativeCount == 1 || negativeCount == 3) {
        cout << "-" << std::endl;
    }
    else {
        cout << "+" << std::endl;
    }

    return 0;
}