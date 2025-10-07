// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= n; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {

//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++) // outer
//     {
//         char ch = 'A';
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch;
//             ch = ch + 1; // A-> 65 + 1 = 66 -> B
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 3;

//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
// cout<< "after pattern:" << num <<endl; //10
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 3;

//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     cout << "after pattern:" << ch << endl; //
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     { // n
//         for (int j = 0; j<i+1; j++)
//         { // i+1
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n=4;
//     for(int i=0; i<n; i++ ){
//         for(int j=0; j<i+1; j++){
//             cout<<(i+1) <<" ";

//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A' + i;
//         for (int j = 0; j <= i; j++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= i + 1; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j > 0; j--)
//         {
//             cout << j<<" ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// FLOYD'S TRIANGLE PATTERN
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j > 0; j--)// backwords => i+1
//         {
//             cout << num<< " ";
//             num++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// HW PATTERN

// Charecter Pattern floyed's triangle
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4; // number of rows
//     char ch = 'A'; // starting character

//     for (int i = 0; i < n; i++)   // rows
//     {
//         for (int j = 0; j <= i; j++)  // columns
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// charactor  pattern of reverse letter triangle
//  #include <iostream>
//  using namespace std;

// int main()
// {
//     int n = 4;           // number of rows
//     char ch = 'A';       // starting letter

//     for (int i = 0; i < n; i++)
//     {
//         char current = ch + i;   // starting letter for this row
//         for (int j = i + 1; j > 0; j--)  // same as your number triangle
//         {
//             cout << current << " ";     // print letter
//             current--;                  // move backward
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Inverted Triange Pattern
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4; // number of rows

//     int num = 1;
//     for (int i = 0; i < n; i++) // rows
//     {
//         // Spaces
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         // Numbers
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << (i + 1); //<< " "; for different pattern
//         }
//         cout << endl;
//     }

//     return 0;
// }

// HW Problem
//  Inverted Triange Pattern Character
//  #include <iostream>
//  using namespace std;

// int main()
// {
//     int n = 4; // number of rows
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         // Spaces
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         // Characters
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << ch;
//         }
//         cout << endl;
//         ch++;
//     }
//     return 0;
// }

// Pyramid Pattern
// #include <iostream>
// using namespace std;

// int main()
// {                                           // USE OF NESTED LOOPS
//     int n = 4; // number of rows
//     for (int i = 0; i < n; i++)
//     {
//         // Spaces: n-i-1
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }

//         // nums1: i+1
//         for (int j = 1; j <= i + 1; j++)
//         {
//             cout << j;
//         }

//         // nums2
//         for (int j = i; j > 0; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // Hollow Pyramid Pattern
// #include <iostream>
// using namespace std;

// int main()
// {              // USE OF NESTED LOOPS
//     int n = 4; // number of rows

//     // TOP
//     for (int i = 0; i < n; i++)
//     {
//         // SPACES
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         cout << "*";

//         if (i != 0)
//         {
//             // SPACES
//             for (int j = 0; j < 2 * i - 1; j++)
//             {
//                 cout << " ";
//             }

//             cout << "*";
//         }

//         cout << endl;
//     }

//     // BOTTOM PART
//     for (int i = 0; i < n - 1; i++) // 0 to n-2
//     {
//         // SPACES
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << " ";
//         }
//         cout << "*";
//         if (i != n - 2)
//         {
//             // SPACES
//             for (int j = 0; j < 2 * (n - i) - 5; j++)
//             {
//                 cout << " ";
//             }
//             cout << "*";
//         }

//         // ITS necessary to end line after every line print
//         cout << endl;
//     }

//     return 0;
// }


//Butterfly Pattern
// Butterfly Pattern
#include <iostream>
using namespace std;

int main()
{
    int n = 4; // number of rows (you can change this)

    // TOP HALF
    for (int i = 1; i <= n; i++)
    {
        // LEFT STARS
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // SPACES IN MIDDLE
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // RIGHT STARS
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl; // move to next line
    }

    // BOTTOM HALF
    for (int i = n; i >= 1; i--)
    {
        // LEFT STARS
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // SPACES IN MIDDLE
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // RIGHT STARS
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl; // move to next line
    }

    return 0;
}
