#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, decoded = "";
    char tracker = '0';
    cin >> s;
    for (char curr : s)
    {
        if (curr == '1')
            tracker += 1;
        else
        {
            decoded += tracker;
            tracker = '0';
        }
    }
    decoded += tracker;
    cout << decoded;
    return 0;
}