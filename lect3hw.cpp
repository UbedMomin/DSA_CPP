#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) { // check divisibility by 3
            sum += i;
        }
    }

    cout << "Sum of numbers divisible by 3 from 1 to " << n << " is: " << sum << endl;
    return 0;
}
// CMD  g++ lect3hw.cpp -o lect3hw    
//  ./lect3hw


#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        cout << "Factorial of " << n << " is: " << fact << endl;
    }

    return 0;
}
