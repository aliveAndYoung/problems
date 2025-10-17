#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int countWays(int n, int m) {
    long long ways = power(2, n + m - 2, MOD);
    return (ways * 2) % MOD;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << countWays(n, m) << endl;
    return 0;
}
