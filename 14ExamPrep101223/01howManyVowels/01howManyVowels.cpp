#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	int numberOfLetters;
	cin >> numberOfLetters;
    string input;
	cin.ignore();
	getline(cin, input);
	string vowels = "aeiouy";
	int numberOfVowels = 0;
	int numberOfConsonants = 0;

	for (char &c : input) {
		if ((vowels.find(tolower(c)) != string::npos) && (isalpha(c))) {
			numberOfVowels++;
		} else if (isalpha(c))
		{
			numberOfConsonants++;	
		}
	}
	cout << numberOfVowels << " " << numberOfConsonants << endl;
	return 0;
}
