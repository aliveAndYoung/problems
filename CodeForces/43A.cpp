// by LIFECOULDBEDREAM
// 2025/08/13 04:22

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, count = 1;
    cin >> n;
    string teamA;
    string teamB = "LIFECOULDBEDREAM";
    cin >> teamA;
    n--;
    while (n--)
    {
        string temp;
        cin >> temp;
        if (temp == teamA)
        {
            count++;
        }
        else
        {
            count--;
            if (teamB == "LIFECOULDBEDREAM")
            {
                teamB = temp;
            }
        }
    }
    teamA = count > 0 ? teamA : teamB;
    cout << teamA;

    return 0;
}