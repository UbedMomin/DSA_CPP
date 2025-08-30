// #include <iostream>
// using namespace std;

// int main()
// {
//  double price = 100.99;
 
//  int newprice = (int)price;
//  cout<<newprice<<endl;
//   return 0;
// }

// // boilerplate code

#include <iostream>
using namespace std;

int main(){

int a,b;
cout <<"Enter a:";
cin>>a;
cout << "Enter b:";
cin>>b;
int diff = a-b;
int product = a*b;
float div = a/b;
int mod = a%b;
cout<< "difference:" <<diff<<endl;
cout<< "Product:" <<product<<endl;
cout<< "division:" <<div<<endl;
cout<< "modulus:" <<mod<<endl;
}