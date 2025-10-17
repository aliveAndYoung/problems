#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <typeinfo>
using namespace std;
int main()
{
    int n, k, good = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        string c;
        cin >> c;
        vector<bool> vec(k + 1, false);
        for (int t = 0; t < c.length(); t++)
        {
            int currNum = c[t] - 48;
            if (currNum <= k)
                vec[currNum] = true;
        }
        if (count(vec.begin(), vec.end(), false) == 0)
            good++;
    }
    cout << good;

    return 0;
}