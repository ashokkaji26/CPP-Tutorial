// Prime or not 
// prime :- only divisible by 1 and number itself.
// Concept :- Prove the number is not prime, by finding divisor other than 1 and number itself.
// for loop from 2 to n -1, check if number is divisible in any iteration
// Edge cases:- a. 0 and 1, neither 0 nor 1 are considered as prime numbers. Prime nos. must have exactly two distinct positive divisors, one and themselve.The number 1 has only one divisor(itself), and zero has an infinite number of divisors.
// Edge cases:- b. Negative nos. : prime nos. are defined as positive integers,So negative nos. are not considered prime. n <= 1 as non-prime.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a nummber: ";
    cin >> n;

    bool is_Prime = true;

    for( int i = 2; i < n; i++ ) {
        if( n % i == 0 ) {
            is_Prime = false;
        }
    }

        if( n <= 1 ) {
            cout << "Given no. is not a Prime number!" <<endl;
        } else if( is_Prime == true ) {
        cout << "Given number is a Prime number!" <<endl;
        } else {
        cout << "Given number is not a Prime number!" <<endl;
        }

    return 0;
}