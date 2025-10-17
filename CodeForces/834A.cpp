#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s, e;
    long long t;
    cin >> s >> e >> t;
    map<char, int> encode = {{'^', 0}, {'>', 1}, {'v', 2}, {'<', 3}};
    if ((encode[s] - encode[e]) % 2 == 0)
        cout << "undefined";
    else if (((t % 4) + encode[s]) % 4 == encode[e])
        cout << "cw";
    else
        cout << "ccw";
}