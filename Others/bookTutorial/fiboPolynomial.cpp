#include <bits/stdc++.h>
using namespace std;

// int fibo(int n)
// {
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;
//     return fibo(n - 1) + fibo(n - 2);
// };

// Binet's formula: F(n) = (φⁿ - ψⁿ) / √5
// where φ = (1 + √5)/2 and ψ = (1 - √5)/2
unsigned long long binet(unsigned long long n) {
    long double sqrt5 = sqrtl(5.0L);
    long double phi = (1.0L + sqrt5) / 2.0L;
    long double psi = (1.0L - sqrt5) / 2.0L;
    
    // For large n, ψⁿ becomes very small and can be ignored
    return roundl((powl(phi, n) - powl(psi, n)) / sqrt5);
}

unsigned long long binett(unsigned long long n)
{
    unsigned long long x = powl((1ll + sqrtl(5ll)), n);
    unsigned long long y = powl((1ll - sqrtl(5ll)), n);
    return roundl((x - y) / (powl(2ll, n) * sqrtl(5ll)));
}

int main()
{
    // Test cases
    cout << "Fibonacci numbers using Binet's formula:" << endl;
    for (int i = 0; i <= 20; i++) {
        cout << "F(" << i << ") = " << binet(i) << endl;
    }
    
    // Larger test case
    cout << "\nF(50) = " << binet(50) << endl;

    return 0;
}