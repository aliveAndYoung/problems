#include <iostream>
#include <vector>
using namespace std;
typedef long long ll ;
int main()
{
    ll n, m , sum = 0 ;
    cin >> n >> m;
    vector<int> v(101, 0);
    for (int l = 0; l < m; l++)
    {
        int f, t, val;
        cin >> f >> t >> val;
        v[f] -= val;
        v[t] += val;
    }
    // 1 n
    for (int f = 0; f <= n; f++)
    {
        if (v[f] > 0)
        {
            sum += v[f];
        }
    }
    cout<< sum ;

    return 0;
}