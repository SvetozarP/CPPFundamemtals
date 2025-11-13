#include <iostream>
#include <string>

using namespace std;

int countVowels(const string& str)
{
    int count = 0;
    for (char ch : str)
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
	string input;
	cin >> input;
	cout << countVowels(input) << endl;
	return 0;
}
