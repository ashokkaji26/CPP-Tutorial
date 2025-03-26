// Sum of N integers from 1 to N.
// using for loop
// int sum = 0;   To store the sum.


#include <iostream>
using namespace std;

int main(){

    int N; 
    cout << "Enter value of N: ";
    cin >> N;

    int sum = 0;

    for (int i = 1; i <= N; i++) {
        sum = sum + i;
    }

    cout << "Sum of N integers is: " << sum <<endl;

    return 0;
}