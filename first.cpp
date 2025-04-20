#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

// Function to precompute factorials modulo MOD
vector<long long> precomputeFactorials(int maxN) {
    vector<long long> factorial(maxN + 1, 1);
    for (int i = 2; i <= maxN; ++i) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
    return factorial;
}

int main() {
    int T;
    cin >> T;

    // Find the maximum N in the input
    int maxN = 0;
    vector<pair<int, long long>> testCases(T);
    for (int i = 0; i < T; ++i) {
        int N;
        long long K;
        cin >> N >> K;
        testCases[i] = {N, K};
        maxN = max(maxN, N);
    }

    // Precompute factorials up to maxN
    vector<long long> factorial = precomputeFactorials(maxN);

    // Process each test case
    for (const auto& testCase : testCases) {
        int N = testCase.first;
        long long K = testCase.second;

        // If K == 0, the sequence is constant, and the result is 1
        if (K == 0) {
            cout << 1 << endl;
        } else {
            // Otherwise, the result is N! % MOD
            cout << factorial[N] << endl;
        }
    }

    return 0;
}