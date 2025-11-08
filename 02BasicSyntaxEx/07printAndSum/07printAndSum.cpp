#include <iostream>

using namespace std;

int main()
{
	int startNumber, endNumber;
	cin >> startNumber >> endNumber;

	int sum = 0;

	for (int i = startNumber; i <= endNumber; i++) {
		cout << i << " ";
		sum += i;
	}
	cout << endl << "Sum: " << sum << endl;
	return 0;
}
