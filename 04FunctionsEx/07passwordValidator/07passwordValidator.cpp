#include <iostream>
#include <string>


using namespace std;

bool validateLength(const string& password)
{
	return (password.length() >= 6 && password.length() <= 10);
}

bool validateCharacters(const string& password)
{
	for (char ch : password)
	{
		if (!isalnum(ch))
		{
			return false;
		}
	}
	return true;
}

bool validateDigitCount(const string& password)
{
	int digitCount = 0;
	for (char ch : password)
	{
		if (isdigit(ch))
		{
			digitCount++;
		}
	}
	return (digitCount >= 2);
}

int main()
{
	string password;
	cin >> password;
	bool isValid = true;
	if (!validateLength(password))
	{
		cout << "Password must be between 6 and 10 characters" << endl;
		isValid = false;
	}
	if (!validateCharacters(password))
	{
		cout << "Password must consist only of letters and digits" << endl;
		isValid = false;
	}
	if (!validateDigitCount(password))
	{
		cout << "Password must have at least 2 digits" << endl;
		isValid = false;
	}
	if (isValid)
	{
		cout << "Password is valid" << endl;
	}
	return 0;
}
