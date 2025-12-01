#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string essay;
    getline(cin, essay);

    vector<int> counts;
    int currentPunctuationCount = 0;

    for (char c : essay) {
        if (c == '|') {
            counts.push_back(currentPunctuationCount);
            currentPunctuationCount = 0;
        }
        else if (ispunct(c)) {
            currentPunctuationCount++;
        }
    }

    vector<pair<int, int>> groupedCounts;
    if (!counts.empty()) {
        sort(counts.begin(), counts.end());

        groupedCounts.push_back({ counts[0], 1 });

        for (size_t i = 1; i < counts.size(); ++i) {
            if (counts[i] == groupedCounts.back().first) {
                groupedCounts.back().second++;
            }
            else {
                groupedCounts.push_back({ counts[i], 1 });
            }
        }
    }

    for (const auto& pair : groupedCounts) {
        cout << pair.first << " symbol sentences: " << pair.second << std::endl;
    }

    return 0;
}