#include <iostream>
#include <string>
#include <cctype>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    getline(cin, input);

    set<char> vowels = { 'a', 'e', 'i', 'o', 'u' };

    string output = "";
    char previousCharInOutput = '\0';

    for (char currentChar : input)
    {

        char currentLower = tolower(currentChar);

        if (previousCharInOutput != '\0' && tolower(previousCharInOutput) == currentLower)
        {
            if (vowels.count(currentLower)) {
                output += currentChar;
                previousCharInOutput = currentChar;
            }
        }
        else
        {
            output += currentChar;
            previousCharInOutput = currentChar;
        }
    }

    cout << output << endl;

    return 0;
}