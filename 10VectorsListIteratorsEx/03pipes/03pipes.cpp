#include <iostream>

using namespace std;

void readArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int main()
{
    int numberOfPipes;
	cin >> numberOfPipes;
	int* checkups = new int[numberOfPipes];
	readArray(checkups, numberOfPipes);
	int* installation = new int[numberOfPipes];
	readArray(installation, numberOfPipes);
	int* lifetimes = new int[numberOfPipes];
	for (int i = 0; i < numberOfPipes; i++) {
		int damage = installation[i] - checkups[i];
		if (damage < 0) {
			damage = 0;
		}
		lifetimes[i] = installation[i] / damage;
	}
	for (int i = 0; i < numberOfPipes; i++) {
		cout << lifetimes[i] << " ";
	}
	cout << endl;
	delete[] checkups;
	delete[] installation;
	delete[] lifetimes;
	return 0;
}
