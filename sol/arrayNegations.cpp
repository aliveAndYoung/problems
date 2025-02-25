#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        vector<int> v(a, 0);
        for (int i = 0; i < a; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        for (int i = 0; i < b; i++)
        {
            cout<< v[i] << " " ;
            if (v[i] < 0)
                v[i] = -v[i];
            else
            {
                if (find(v.begin(), v.end(), 0) != v.end())
                    v[0] = -v[0];
                else
                    continue;
            }
            cout<< v[i] << ' ' ;
        }

        for (int i = 0; i < a; i++)
            sum += v[i];
        cout << sum << endl;
    }
}