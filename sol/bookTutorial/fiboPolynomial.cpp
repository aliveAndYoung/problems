#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
};

int binet(int n)
{
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}

int binett(int n)
{
    double x = pow((1 + sqrt(5)), n);
    double y = pow((1 - sqrt(5)), n);
    return round((x - y) / (pow(2, n) * sqrt(5)));
}

int main()
{

    cout << fibo(8);
    cout << endl;
    cout << binet(8);
    cout << endl;
    cout << binett(8);

    return 0;
}