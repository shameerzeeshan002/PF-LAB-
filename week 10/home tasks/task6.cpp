#include <iostream>
using namespace std;

int factorial(int n);
bool Strong(int num);

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    if (Strong(num))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

bool Strong(int num)
{
    int original = num;
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        sum += factorial(digit);
        num = num / 10;
    }

    return sum == original;
}