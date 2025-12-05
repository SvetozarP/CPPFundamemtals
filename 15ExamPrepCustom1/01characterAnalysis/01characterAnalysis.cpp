#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int vowels = 0;
	int consonants = 0;
	int others = 0;
	string text;
	string vowelList = "aeiouy";
	getline(cin, text);
	for (char c : text) {
		char lowerC = tolower(c);
		if (isalpha(lowerC)) {
			if (vowelList.find(lowerC) != string::npos) {
				vowels++;
			} else {
				consonants++;
			}
		} else {
			others++;
		}
	}
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Others: " << others << endl;
	return 0;

}
