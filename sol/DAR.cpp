#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, currA = 0, currB = 0, currC = 0;
    string winner;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string currTeam;
        std::getline(cin, currTeam);

        int a, b, c;
        cin >> a >> b >> c;
        if (a > currA)
        {
            currA = a;
            currB = b;
            currC = c;
            winner = currTeam;
        }
        if (a == currA && b < currB)
        {
            currA = a;
            currB = b;
            currC = c;
            winner = currTeam;
        }
        if (a == currA && b == currB && c < currC)
        {
            currA = a;
            currB = b;
            currC = c;
            winner = currTeam;
        }
    }
    cout << winner << endl;
    return 0;
}