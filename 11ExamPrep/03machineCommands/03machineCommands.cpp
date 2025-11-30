#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> sequence;
    string command;

    while (cin >> command && command != "end")
    {
        if (command == "sum")
        {
            int num2 = sequence.back();
            sequence.pop_back();
            int num1 = sequence.back();
            sequence.pop_back();
            sequence.push_back(num1 + num2);
        }
        else if (command == "subtract")
        {
            int a = sequence.back();
            sequence.pop_back();
            int b = sequence.back();
            sequence.pop_back();
            sequence.push_back(a - b);
        }
        else if (command == "concat")
        {
            int a = sequence.back();
            sequence.pop_back();
            int b = sequence.back();
            sequence.pop_back();

            stringstream ss;
            ss << b << a;
            long long result_ll;
            ss >> result_ll;
            sequence.push_back(static_cast<int>(result_ll));
        }
        else if (command == "discard")
        {
            sequence.pop_back();
        }
        else
        {
            sequence.push_back(stoi(command));
        }
    }

    for (int num : sequence)
    {
        cout << num << endl;
    }

    return 0;
}