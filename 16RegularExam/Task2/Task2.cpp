#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {

    int size;
    cin >> size;

    vector<int> nums(size);
    for (int i = 0; i < size; ++i) {
        cin >> nums[i];
    }

    while (nums.size() > 1) {
        vector<int> condensed;
        for (int i = 0; i < nums.size() - 1; ++i) {
            condensed.push_back(nums[i] + nums[i + 1]);
        }
        nums = condensed;
    }

    cout << nums[0] << endl;

    return 0;
}