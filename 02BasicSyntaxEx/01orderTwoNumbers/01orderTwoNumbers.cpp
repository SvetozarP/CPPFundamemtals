#include <iostream>

using namespace std;

int main()
{
    int numberA, numberB;
	cin >> numberA >> numberB;

	if (numberA < numberB) {
		cout << numberA << " " << numberB << endl;
	} else {
		cout << numberB << " " << numberA << endl;
	}
	return 0;
}
