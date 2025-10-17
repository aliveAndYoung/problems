#include <iostream>
using namespace std;
int main()
{
    int k, r, n = 1;
    cin >> k >> r;
    while ((n * k) % 10 != 0 && ((n * k) - r) % 10 != 0)
        n++;
    cout << n;
    return 0;
}