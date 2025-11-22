#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	getline(cin, text);
	string toReplace;
	getline(cin, toReplace);
	string replacement;
	getline(cin, replacement);
	size_t pos = 0;
	while ((pos = text.find(toReplace, pos)) != string::npos) {
		text.replace(pos, toReplace.length(), replacement);
		pos += replacement.length();
	}
	cout << text << endl;
	return 0;
}
