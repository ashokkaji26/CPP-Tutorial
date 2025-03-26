// Factorial of N = 1 * 2 * 3 * ...... * N.
// while loop
// extra variable, int fact = 1;

#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter value of N: ";
    cin >> N;

    int i = 1;
    int fact = 1;

    while (i <= N) {
        fact = fact * i;
        i = i + 1;
    }

    cout << "Factorial of N is: " << fact <<endl;
    return 0;
}