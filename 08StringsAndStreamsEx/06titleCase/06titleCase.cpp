#include <iostream>
#include <string>

using namespace std;

int main()
{
    string inputText;
	getline(cin, inputText);
	bool newWord = true;
	for (char& c : inputText) {
		if (!isalnum(c)) {
			newWord = true;
		} else {
			if (newWord) {
				c = toupper(c);
				newWord = false;
			} else {
				c = tolower(c);
			}
		}
	}
	cout << inputText << endl;
	return 0;
}
