#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int Test_cases;
    cin >> Test_cases;
    
    while (Test_cases--) {
        int N, K, D;
        cin >> N >> K >> D;
        
        vector<int> T_i(N);
        for (int i = 0; i < N; ++i) {
            cin >> T_i[i];
        }
        
        if (K >= N) {
            cout << 0 << endl;
            continue;
        }
        
        int maxActive = N - K;
        
        sort(T_i.begin(), T_i.end());
        
        int totalPlucks = 0;
        
        for (int i = 0; i < maxActive; ++i) {
            int growTime = T_i[i];
            int plucks = 1 + (D - 1) / growTime;
            totalPlucks += plucks;
        }
        
        cout << totalPlucks << endl;
    }

    return 0;
}