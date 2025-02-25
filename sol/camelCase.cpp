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
        int count = 0;
        cin >> s;
        for (char c : s)
        {
            if (isupper(c))
                count++;
        }
        count < 7 ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}