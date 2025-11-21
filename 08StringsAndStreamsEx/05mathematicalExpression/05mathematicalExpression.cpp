#include <iostream>
#include <string>

using namespace std;

int main()
{
	string expression;
	getline(cin, expression);
	int left_brackets = 0;
	for (char c : expression)
	{
		if (c == '(')
			left_brackets++;
		else if (c == ')')
			left_brackets--;
	}
	if (left_brackets == 0)
		cout << "correct" << endl;
	else
		cout << "incorrect" << endl;
	return 0;
}
