#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    long long currentValue = 0;
    long long previousValue = 0;

    string line;
    getline(std::cin, line);

    stringstream ss(line);
    string token;

    while (ss >> token) {
        if (token == "+") {
            long long result = previousValue + currentValue;
            previousValue = currentValue; 
            currentValue = result;
        }
        else if (token == "*") {
            long long result = previousValue * currentValue;
            previousValue = currentValue; 
            currentValue = result;
        }
        else if (token == "-") {
            long long result = previousValue - currentValue;
            previousValue = currentValue; 
            currentValue = result;
        }
        else if (token == "/") {
            long long result = previousValue / currentValue;
            previousValue = currentValue; 
            currentValue = result;
        }
        else {
            previousValue = currentValue;
            currentValue = std::stoll(token);
        }
    }

    cout << currentValue << " " << previousValue << std::endl;

    return 0;
}