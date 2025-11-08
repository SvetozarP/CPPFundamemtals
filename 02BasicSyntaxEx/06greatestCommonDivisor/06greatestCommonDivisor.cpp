#include <iostream>

using namespace std;

int main()
{
	int numberA, numberB;
	cin >> numberA >> numberB;
	while (numberB != 0) {
		int temp = numberB;
		numberB = numberA % numberB;
		numberA = temp;
	}
	cout << numberA << endl;
	return 0;
}
