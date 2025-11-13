#include <iostream>
#include <iomanip>

using namespace std;

void calculateFactorial(int n, double &fact)
{
    fact = 1.0;
    for (int i = 2; i <= n; ++i)
    {
        fact *= i;
    }
}

void factorialDivision(int n1, int n2, double &result)
{
    double fact1;
    calculateFactorial(n1, fact1);
    double fact2;
    calculateFactorial(n2, fact2);
    
    if (fact2 != 0)
    {
        result = fact1 / fact2;
    }
    else
    {
        cout << "Error: Division by zero" << endl;
        result = 0.0;
    }
}

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	double result;
    factorialDivision(n1, n2, result);
	cout << fixed << setprecision(2) << result << endl;
	return 0;
}
