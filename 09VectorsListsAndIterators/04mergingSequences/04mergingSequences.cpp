#include <iostream>
#include <vector>

using namespace std;

void readSequence(vector<int>& sequence)
{
    int number;
    while (cin >> number)
    {
        sequence.push_back(number);
        if (cin.peek() == '\n')
            break;
    }
}

int main()
{
	vector<int> sequence1, sequence2, mergedSequence;
	readSequence(sequence1);
    readSequence(sequence2);
    size_t i = 0, j = 0;
    while (i < sequence1.size() && j < sequence2.size())
    {
        mergedSequence.push_back(sequence1[i]);
        i++;
        
        mergedSequence.push_back(sequence2[j]);
        j++;
    }
    while (i < sequence1.size())
    {
        mergedSequence.push_back(sequence1[i]);
        i++;
    }
    while (j < sequence2.size())
    {
        mergedSequence.push_back(sequence2[j]);
        j++;
    }
    for (const int& num : mergedSequence)
    {
        cout << num << " ";
    }
	cout << endl;
	return 0;
}
