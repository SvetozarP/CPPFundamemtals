#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
	getline(cin, input);
	string output;
	
	for (size_t i = 0; i < input.length(); ++i) {
		if (i == 0 || input[i] != input[i - 1]) {
			output += input[i];
		}
	}
	
	cout << output << endl;
	
	return 0;
}
