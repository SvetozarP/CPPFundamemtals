#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
#include <sstream>

using namespace std;

void readDeque(deque<int>& dq)
{
    string line;
    getline(cin, line);
    stringstream ss(line);
    int number;
    vector<int> temp_vec;
    while (ss >> number) {
        temp_vec.push_back(number);
    }
    reverse(temp_vec.begin(), temp_vec.end());
    for (int val : temp_vec) {
        dq.push_back(val);
    }
}

int main()
{
    deque<int> trackA;
    deque<int> trackB;

    readDeque(trackA);
    readDeque(trackB);

    deque<int> mergedTrackFrontToBack; 
    string moves_sequence = ""; 

    while (!trackA.empty() || !trackB.empty())
    {
        bool take_from_A = false;

        if (trackA.empty())
        {
            take_from_A = false;
        }
        else if (trackB.empty())
        {
            take_from_A = true;
        }
        else
        {
            if (trackA.front() < trackB.front())
            {
                take_from_A = true;
            }
            else
            {
                take_from_A = false;
            }
        }

        if (take_from_A)
        {
            mergedTrackFrontToBack.push_back(trackA.front());
            trackA.pop_front();
            moves_sequence += "A";
        }
        else
        {
            mergedTrackFrontToBack.push_back(trackB.front());
            trackB.pop_front();
            moves_sequence += "B";
        }
    }

    cout << moves_sequence << endl;

    for (auto it = mergedTrackFrontToBack.rbegin(); it != mergedTrackFrontToBack.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}