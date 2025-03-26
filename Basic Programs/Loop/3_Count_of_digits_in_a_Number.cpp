// Count of digits in a number.
// while loop
// Concept:- keep dividing the no. by 10 untill it becomes 0(zero).
// Number of divisions by 10 = count of the digits in the Number.
// int counter = 0;  To track the count of divisions by 10.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int counter = 0;

    while (n > 0) {
        n = n / 10;
        counter++;
    }
    cout << "No. of digits in above no. is: "  << counter <<endl;
    return 0;
}
