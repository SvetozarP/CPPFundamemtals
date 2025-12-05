#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isNumber(const string& s) {
    if (s.empty()) return false;
    size_t start = 0;
    if (s[0] == '-') {
        start = 1;
    }
    for (size_t i = start; i < s.length(); ++i) {
        if (!isdigit(s[i])) {
            return false;
        }
    }
    return true;
}

int main()
{
    long long currentResult = 0;
    long long lastOperand = 0;
    long long historySum = 0;
    string inputLine;

    getline(cin, inputLine);

    stringstream ss(inputLine);
    string token;

    while (ss >> token) {
        if (isNumber(token)) {
            historySum += currentResult;
            lastOperand = currentResult;

            currentResult = stoll(token);
        }
        else {
            long long tempResult = 0;

            if (token == "+") {
                tempResult = lastOperand + currentResult;
            }
            else if (token == "-") {
                tempResult = lastOperand - currentResult;
            }
            else if (token == "*") {
                tempResult = lastOperand * currentResult;
            }
            else if (token == "/") {
                tempResult = lastOperand / currentResult;
            }
            else if (token == "%") {
                tempResult = lastOperand % currentResult;
            }
            currentResult = tempResult;
        }
    }

    cout << currentResult << " " << lastOperand << " " << historySum << endl;

    return 0;
}