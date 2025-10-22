// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 4, b = 8;

//     cout << (a & b) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 4, b = 8;

//     cout << (a | b) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 4, b = 8;

//     cout << (a ^ b) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << (10 << 2) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << (8 >> 2) << endl;
//     return 0;
// }

//HW 
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << (6 & 10) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << (6 | 10) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << (6 ^ 10) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << (10 << 2) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << (10 >> 1) << endl;
//     return 0;
// }

// HW Check if a number is a power of 2 using a loop

// #include <iostream>
// using namespace std;

// bool isPowerOfTwoLoop(int n) {
//     if (n <= 0) return false;
//     while (n > 1) {
//         if (n % 2 != 0) return false;
//         n = n / 2;
//     }
//     return true;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isPowerOfTwoLoop(num))
//         cout << num << " is a power of 2 (loop method)" << endl;
//     else
//         cout << num << " is NOT a power of 2 (loop method)" << endl;

//     return 0;
// }

// HW Check if a number is a power of 2 using bits (no loop)
// #include <iostream>
// using namespace std;

// bool isPowerOfTwoBits(int n) {
//     return (n > 0) && ((n & (n - 1)) == 0);
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isPowerOfTwoBits(num))
//         cout << num << " is a power of 2 (bit method)" << endl;
//     else
//         cout << num << " is NOT a power of 2 (bit method)" << endl;

//     return 0;
// }


// HW Reverse an integer

#include <iostream>
using namespace std;

int reverseInteger(int n) {
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversed = reverseInteger(num);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
