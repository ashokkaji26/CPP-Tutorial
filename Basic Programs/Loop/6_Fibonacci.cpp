// print 1st N nos. of a Fibonacci series. 
// Fibonacci Series :- In fibonacci series each number is obtained by adding previous two numbers.
// 0,1,1,2,3,5,8,13,...
// Cocept:- Fn = fn-1 + fn-2 , initializing and conditioning loop.
// a. int i = 2, i < n;      b. int i = 3, i <= n;

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n <= 0) {        // edge cases
        cout << "Invalid input! \nTry no. greater than or equal to 1.";
        return 0;
    }

    int a = 0;
    int b = 1;

    if( n >= 1 ) { // printing 1st and 2nd number
        cout << a << " ";
        if( n > 1 ) {
            cout << b << " ";
        }
    }
    

    for ( int i = 2; i< n; i++) {    // printing 3rd and onward numbers. // int i = 3; i<=n; can also be used.
        int c= a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}