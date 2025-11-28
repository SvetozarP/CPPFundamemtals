#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool canContain(char outerTypeChar, char innerTypeChar) {
    if (outerTypeChar == '{') {
        return true;
    }
    if (outerTypeChar == '[') {
        return (innerTypeChar == '[' || innerTypeChar == '(');
    }
    if (outerTypeChar == '(') {
        return (innerTypeChar == '(');
    }
    return false;
}

int main()
{
    string brackets_input;
    getline(cin, brackets_input);

    stack<char> s; 

    for (char ch : brackets_input)
    {
        if (ch == '{' || ch == '[' || ch == '(')
        {
            if (!s.empty()) {
                char outerBracket = s.top();
                char innerBracket = ch;

                if (!canContain(outerBracket, innerBracket)) {
                    cout << "invalid" << endl;
                    return 0;
                }
            }
            s.push(ch);
        }
        else if (ch == '}' || ch == ']' || ch == ')')
        {
            if (s.empty())
            {
                cout << "invalid" << endl;
                return 0;
            }

            char last_open = s.top();
            s.pop();

            if ((ch == '}' && last_open != '{') ||
                (ch == ']' && last_open != '[') ||
                (ch == ')' && last_open != '('))
            {
                cout << "invalid" << endl;
                return 0;
            }
        }
    }

    if (s.empty())
    {
        cout << "valid" << endl;
    }
    else
    {
        cout << "invalid" << endl;
    }

    return 0;
}