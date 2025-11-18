#include <iostream>
#include <string>

using namespace std;

int main() {
    string first;
    getline(cin, first);

    string second;
    getline(cin, second);

    if (first.empty()) {
        cout << second << endl;
        return 0;
    }

    size_t pos = second.find(first);

    while (pos != string::npos) {
        second.erase(pos, first.length());
        pos = second.find(first);
    }

    cout << second << endl;

    return 0;
}