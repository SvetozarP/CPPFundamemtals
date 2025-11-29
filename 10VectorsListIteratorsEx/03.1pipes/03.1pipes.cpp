#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void readVector(vector<int>& vec, int size) {
    for (int i = 0; i < size; i++) {
        cin >> vec[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numberOfPipes;
    cin >> numberOfPipes;

    vector<int> checkups(numberOfPipes);
    vector<int> installation(numberOfPipes);
    vector<int> lifetimes(numberOfPipes);

	readVector(checkups, numberOfPipes);
	readVector(installation, numberOfPipes);

    for (int i = 0; i < numberOfPipes; ++i) {
        int damage_per_year = installation[i] - checkups[i];
        lifetimes[i] = installation[i] / damage_per_year;
    }

    for (int i = 0; i < numberOfPipes; ++i) {
        cout << lifetimes[i] << (i == numberOfPipes - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}