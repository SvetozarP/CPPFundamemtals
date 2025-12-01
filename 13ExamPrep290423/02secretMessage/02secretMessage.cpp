#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void sumNumbersInMessage(const string& message, int& sum)
{
    sum = 0;
    for (char ch : message)
    {
        if (isdigit(ch))
        {
            sum += ch - '0';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    getline(cin, line, '.');
    int sum;
    sumNumbersInMessage(line, sum);

    if(isalpha(static_cast<char>(sum)))
    {
        cout << static_cast<char>(sum) << '\n';
    }
    else
    {
        cout << sum << '\n';
    }
    
    return 0;
}