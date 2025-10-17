#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int x;
    std::cin >> x;

    std::vector<int> dp(1000001, 0); // dp[i] = expected value when s - x = i
    dp[0] = 0; // base case: game ends when s - x = 0

    for (int i = 1; i <= 1000000; i++) {
        if (i % 10 == 9) { // if i is a multiple of 10, game ends
            dp[i] = (dp[i - 1] + 1) % MOD;
        } else {
            int sum = 0;
            for (int j = 1; j <= 6; j++) {
                sum = (sum + dp[(i + j) % 1000000]) % MOD;
            }
            dp[i] = (sum * 6 + 1) % MOD;
        }
    }

    int ans = dp[x % 1000000];
    std::cout << ans << std::endl;

    return 0;
}