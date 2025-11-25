#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

int readlist(list<int>& lst)
{
    int number;
    int count = 0;
    while (cin >> number)
    {
        lst.push_back(number);
        count++;
        if (cin.peek() == '\n')
            break;
    }
    return count;
}

void add_number_to_back(list<int>& lst, int number)
{
    lst.push_back(number);
}

void remove_number_from_list(list<int>& lst, int number)
{
    lst.remove(number);
}

void remove_at_index(list<int>& lst, int index)
{
    if (index < 0 || index >= lst.size())
        return;
    auto it = lst.begin();
    advance(it, index);
    lst.erase(it);
}

void insert_at_index(list<int>& lst, int index, int number)
{
    if (index < 0 || index > lst.size())
        return;
    auto it = lst.begin();
    advance(it, index);
	lst.insert(it, number);
}

int main()
{
	list<int> lst;
    readlist(lst);
	string command;
	while (cin >> command)
    {
        if (command == "end")
			break;

        if (command == "Add")
        {
            int number;
            cin >> number;
            add_number_to_back(lst, number);
        }
        else if (command == "Remove")
        {
            int number;
            cin >> number;
            remove_number_from_list(lst, number);
        }
        else if (command == "RemoveAt")
        {
            int index;
            cin >> index;
            remove_at_index(lst, index);
        }
        else if (command == "Insert")
        {
            int index, number;
            cin >> number >> index;
            insert_at_index(lst, index, number);
        }
    }
    for (const int& num : lst)
    {
        cout << num << " ";
	}
	cout << endl;
	return 0;
}
