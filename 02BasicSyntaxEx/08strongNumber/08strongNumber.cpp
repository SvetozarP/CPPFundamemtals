#include <iostream>
#include <string>

using namespace std;

int main()
{
    string numberA;
	cin >> numberA;
	int sumOfFactorials = 0;
	for (char digitChar : numberA) {
		int digit = digitChar - '0';
		int factorial = 1;
		for (int i = 1; i <= digit; i++) {
			factorial *= i;
		}
		sumOfFactorials += factorial;
	}
	int originalNumber = stoi(numberA);
	if (sumOfFactorials == originalNumber) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
	return 0;

}
