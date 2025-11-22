#include <iostream>
#include <string>

using namespace std;

int main()
{
	string line;
	getline(cin, line);
	size_t startPosition = 0;
	int sum = 0;
	string words;
	while (startPosition < line.length()) {
		size_t endPosition = line.find(' ', startPosition);
		if (endPosition == string::npos) {
			endPosition = line.length();
		}
		string token = line.substr(startPosition, endPosition - startPosition);
		try {
			int number = stoi(token);
			sum += number;
		} catch (invalid_argument&) {
			if (!words.empty()) {
				words += " ";
			}
			words += token;
		}
		startPosition = endPosition + 1;
	}
	cout << sum << endl;
	cout << words << endl;
	return 0;
}
