#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string line;
    getline(cin, line);

    stringstream ss(line);
    string currentWord;

    string finalResult = "";

    while (ss >> currentWord)
    {
        int repeatCount = currentWord.length();
        for (int i = 0; i < repeatCount; i++)
        {
            finalResult += currentWord;
        }
    }

    cout << finalResult << endl;

    return 0;
}