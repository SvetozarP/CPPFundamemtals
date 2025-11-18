#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	getline(cin, input);
	string digits = "";
	string letters = "";
	string others = "";
	for (char c : input)
	{
		if (isdigit(c))
		{
			digits += c;
		}
		else if (isalpha(c))
		{
			letters += c;
		}
		else
		{
			others += c;
		}
	}
	cout << digits << endl;
	cout << letters << endl;
	cout << others << endl;
	return 0;
}
