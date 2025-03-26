// Optimize checking primality
// concept:- factors , a * b = n
// for loop 2 to root n, casue after root n factors are repeated, and upto root n, larger factors corresponding to smaller factors need not to checked as smaller factor is enogh to check.

#include  <iostream>
using namespace std;

int main () {
     int n;
     cout << "Enter a number: " <<endl;
     cin >> n;

     bool is_Prime = true;

     for ( int i = 2; i * i <= n; i++) {
        if ( n % i == 0) {
            is_Prime = false;
        }
     }
    
     if ( n <= 1 ) {
        cout << "Not a Prime." <<endl;
     } else if ( is_Prime == true) {
        cout << "Prime number." <<endl;
     } else {
        cout << "Not a prime." <<endl;
     }
    return 0;
}

/*

Q. Why check divisors only upto square root of n ?
    --> The fundamental idea is based on properties of factors(divisors).
    --> Let's say we want to check if a number n is prime ?
    --> If n is not a prime no. then by definition it must be composite no. 
    --> This means n can be expressed as product of two factors such that n = a * b.
    --> consider the square root of n, there are 3 possible relationship between a,b and square root n. 
    --> 1. Both a and b are greater than root n :- this contradicts our initial statement n = a * b
    --> 2. Both a and b are smaller than root n :- this also contradicts our initial statement n = a * b
    --> 3. one of a or b is less than root n, and the other is greater than or equal to root n. :- This tells us that if n is composite, atleast one factore must be less than or equal to root n. 
    ** conclusion :- If n has a divisor greater than root n, it must also have a divisor smaller than or equal to root n. 
        Therefore, to check if n is prime, we only need to test for divisibility by numbers  from 2 to root n. 
        If you don't find any divisor in this range, then n must be prime because if it had any divisors at all,
        atleast one of them would have to be in this range.

        ex:- 36 : 1,2,3,4,6,9,12,18,36
    --> 
*/