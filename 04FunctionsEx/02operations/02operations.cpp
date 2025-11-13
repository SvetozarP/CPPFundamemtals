#include <iostream>

using namespace std;

void add(int a, int b, int &result)
{
    result = a + b;
}

void multiply(int a, int b, int &result)
{
    result = a * b;
}

void subtract(int a, int b, int &result)
{
    result = a - b;
}

void divide(int a, int b, int &result)
{
    if (b != 0)
    {
        result = a / b;
    }
    else
    {
        cout << "Error: Division by zero" << endl;
        result = 0;
    }
}

int main()
{
	int a, b;
	cin >> a >> b;
	char op;
	cin >> op;
	int result;
    switch (op)
	{
        case '+':
            add(a, b, result);
            break;
        case '-':
            subtract(a, b, result);
            break;
        case '*':
            multiply(a, b, result);
            break;
        case '/':
            divide(a, b, result);
            break;
        default:
            cout << "Error: Unknown operator" << endl;
            return 1;
    }
    cout << result << endl;
	return 0;
}
