#include <iostream>
#include <iomanip>


using namespace std;

double calculateOrderTotal(int quantity, const string& itemType)
{
    double pricePerItem = 0.0;
    if (itemType == "coffee")
    {
        pricePerItem = 1.5;
    }
    else if (itemType == "water")
    {
        pricePerItem = 1.0;
    }
    else if (itemType == "coke")
    {
        pricePerItem = 1.4;
    }
    else if (itemType == "snacks")
    {
        pricePerItem = 2.0;
    }
    else
    {
        cout << "Invalid item type." << endl;
        return 0.0;
    }
    double total = quantity * pricePerItem;
    return total;
}

int main()
{
	string itemType;
	int quantity;
	cin >> itemType >> quantity;
	double total = calculateOrderTotal(quantity, itemType);
	cout << fixed << setprecision(2) << total << endl;
}
