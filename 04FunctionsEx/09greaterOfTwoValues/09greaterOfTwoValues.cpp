#include <iostream>
#include <string>
#include <limits>

using namespace std;

int compareInt(int a, int b)
{
    return (a >= b) ? a : b;
}

char compareChar(char a, char b)
{
    return (a >= b) ? a : b;
}

string compareString(const string& a, const string& b)
{
    return (a >= b) ? a : b;
}

int main()
{
    string type;
    cin >> type;

    if (type == "int")
    {
        int a, b;
        cin >> a >> b;
        cout << compareInt(a, b) << endl;
    }
    else if (type == "char")
    {
        char a, b;
        cin >> a >> b;
        cout << compareChar(a, b) << endl;
    }
    else if (type == "string")
    {
        string a, b;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        getline(cin, a);
        getline(cin, b);

        cout << compareString(a, b) << endl;
    }

    return 0;
}