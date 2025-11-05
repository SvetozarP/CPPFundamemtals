#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string name;
	int age;
	double grade;

	cin >> name >> age >> grade;
	cout << fixed << setprecision(2);
	cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
	return 0;
}
