#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        bool flag = true;
        cin >> s;
        int n = s.length();
        while (n--)
        {
            if (n != 0 && s[n] - s[n - 1] != 1)
            {
                if (abs(s[n] - s[n - 1]) == 25)
                    continue;
                flag = false;
                break;
            }
        }
        flag ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}