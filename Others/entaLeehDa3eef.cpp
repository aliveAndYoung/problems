#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long satisify(long long l, long long r)
{
    long long maxProduct = -1; // Initialize to -1 to handle 0 products
    long long bestNumber = 0;
    for (long long x = r; x >= l; x--)
    {
        long long sum = 0, product = 1, temp = x;

        // Handle x = 0 case explicitly
        if (x == 0)
        {
            sum = 0;
            product = 0;
        }
        else
        {
            while (temp > 0)
            {
                long long digit = temp % 10;
                sum += digit;
                product *= digit;
                temp /= 10;
            }
        }

        long long current_gcd = gcd(sum, x);
        if (current_gcd > 1)
        {
            if (product > maxProduct)
            {
                maxProduct = product;
                bestNumber = x;
            }
            else if (product == maxProduct && x > bestNumber)
            {
                bestNumber = x;
            }
        }
    }
    return bestNumber;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long start, end;
        cin >> start >> end;
        cout << satisify(start, end) << endl;
    }
    return 0;
}