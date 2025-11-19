#include <iostream>
#include <string>

using namespace std;

void caesarCipher(string& text, int shift) {
	for (char& c : text) {
		c = static_cast<char>(c + shift);
	}
}

int main()
{
    int shift = 3;
	string text;
	getline(cin, text);
	caesarCipher(text, shift);
	cout << text << endl;
	return 0;
}
