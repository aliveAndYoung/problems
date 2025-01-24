#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float n, t, k, d;
    cin >> n >> t >> k >> d;
    if (t < ((t * ceil(n / k)) - d))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}