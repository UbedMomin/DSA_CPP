// Functions

#include <iostream>
using namespace std;

// function defination
int printHello()
{
    cout << "hello\n";
    return 3;
}

int main()
{
    int val = printHello();
    cout << "value = " << val << endl;
    return 0;
}