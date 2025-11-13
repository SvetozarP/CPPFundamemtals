#include <iostream>
#include <string>

using namespace std;

string digitName(int digit) {
    switch (digit) {
    case 1: return "one";
    case 2: return "two";
    case 3: return "three";
    case 4: return "four";
    case 5: return "five";
    case 6: return "six";
    case 7: return "seven";
    case 8: return "eight";
    case 9: return "nine";
    default: return "";
    }
}

string teenName(int number) {
    switch (number) {
    case 10: return "ten";
    case 11: return "eleven";
    case 12: return "twelve";
    case 13: return "thirteen";
    case 14: return "fourteen";
    case 15: return "fifteen";
    case 16: return "sixteen";
    case 17: return "seventeen";
    case 18: return "eighteen";
    case 19: return "nineteen";
    default: return "";
    }
}

string tensName(int number) {
    switch (number) {
    case 2: return "twenty";
    case 3: return "thirty";
    case 4: return "forty";
    case 5: return "fifty";
    case 6: return "sixty";
    case 7: return "seventy";
    case 8: return "eighty";
    case 9: return "ninety";
    default: return "";
    }
}

int main() {
    int number;
    cin >> number;

    if (number == 0) {
        cout << "zero" << endl;
        return 0;
    }

    string result = "";

    int thousands = number / 1000;
    if (thousands > 0) {
        result += digitName(thousands) + " thousand";
    }

    int hundreds = (number % 1000) / 100;
    if (hundreds > 0) {
        if (!result.empty()) {
            result += " ";
        }
        result += digitName(hundreds) + " hundred";
    }

    int lastTwoDigits = number % 100;
    if (lastTwoDigits > 0) {
        if (!result.empty()) {
            result += " ";
        }
        if (lastTwoDigits < 10) {
            result += digitName(lastTwoDigits);
        }
        else if (lastTwoDigits < 20) {
            result += teenName(lastTwoDigits);
        }
        else {
            result += tensName(lastTwoDigits / 10);
            int lastDigit = lastTwoDigits % 10;
            if (lastDigit > 0) {
                result += " " + digitName(lastDigit);
            }
        }
    }

    cout << result << endl;

    return 0;
}