// Power of a number. 
// concept:- n to the power m => n * n * n * .....m times
// for loop m times , multiply n each time

#include <iostream>
using namespace std;

int main() {

    int n,m;
    cout << "Enter n and m: ";
    cin >> n >> m;

    if ( m < 0 ) {      //edge case if m < 0
        cout << "Invalid input !" <<endl;
        return 0;
    } else if( m == 0 ) {        // if m = 0
        cout << "n to the power m is: " << 1 <<endl;
        return 0;
    }
    

    int n_to_the_power_m = 1;

    for( int i = 0; i < m; i++ ){       // m >= 1
        n_to_the_power_m *= n;
    }

    cout << n_to_the_power_m <<endl;
    return 0;
}