#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits> 

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> products;
    products.reserve(n);

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < n; ++i) {
        string product_name;
        getline(cin, product_name);
        products.push_back(product_name);
    }

    sort(products.begin(), products.end());

    int counter = 1;
    for (vector<string>::iterator it = products.begin(); it != products.end(); ++it) {
        cout << counter++ << "." << *it << endl;
    }

    return 0;
}