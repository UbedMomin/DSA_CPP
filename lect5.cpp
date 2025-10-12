// Functions

// #include <iostream>
// using namespace std;

// // function defination
// // int printHello()
// // {
// //     cout << "hello\n";
// //     return 3;
// // }

// int sumN(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

// int factorialN(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }

// int main()
// {
//     // cout << printHello() << endl; // function call
//     // cout << "value = " << val << endl;

//     cout << factorialN(4) << endl;
//     cout << factorialN(5) << endl;
//     return 0;
// }

// Calculate sum of digits of a number
// #include <iostream>
// using namespace std;

// int sumOfDigits(int num)
// {
//     int digSum = 0;

//     while (num > 0)
//     {
//         int lastDig = num % 10;
//         num /= 10;

//         digSum += lastDig;
//     }

//     return digSum;
// }

// int main()
// {
//     cout << "sum = " << sumOfDigits(2356) << endl; // ANS 16
//     return 0;
// }

// Calculate nCr binomial coefficient for n & r

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;  // Corrected
    }
    return fact;
}

// binomial coefficient function
int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    int n = 8, r = 2;
    cout << nCr(n, r) << endl;
    return 0;
}
