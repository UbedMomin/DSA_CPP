// Functions

#include <iostream>
using namespace std;

// function defination
// int printHello()
// {
//     cout << "hello\n";
//     return 3;
// }

int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int factorialN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    // cout << printHello() << endl; // function call
    // cout << "value = " << val << endl;

    cout << factorialN(4) << endl;
    cout << factorialN(5) << endl;
    return 0;
}