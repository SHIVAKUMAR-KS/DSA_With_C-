#include <iostream>
#include <algorithm>
#include <cmath>

#define MOD 1000000007

long long maximizeExpression(int A, int B, int N) {
    long long maxResult = 0;

    for (int X = 0; X <= 2 * N; ++X) {
        long long result = ((static_cast<long long>(A) ^ X) % MOD) * ((static_cast<long long>(B) ^ X) % MOD) % MOD;
        maxResult = std::max(maxResult, result);
    }

    return maxResult;
}

int main() {
    int T;
    std::cin >> T; // Number of test cases

    for (int t = 0; t < T; ++t) {
        int A, B, N;
        std::cin >> A >> B >> N; // Input for each test case

        // Call the function and print the result
        long long result = maximizeExpression(A, B, N);
        std::cout << result << std::endl;
    }

    return 0;
}
