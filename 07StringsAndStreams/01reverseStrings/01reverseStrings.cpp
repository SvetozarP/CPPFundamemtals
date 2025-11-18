#include <iostream>
#include <string>

using namespace std;

void reverseString(const string &input, string &output)
{
    output.clear();
    for (int i = input.length() - 1; i >= 0; --i)
    {
        output += input[i];
    }
}


int main()
{
    while (true)
    {
        string input;
        getline(cin, input);
        if (input == "end")
            break;
        string reversed;
		reverseString(input, reversed);
		cout << input << " = " << reversed << endl;
	}
	return 0;
}
