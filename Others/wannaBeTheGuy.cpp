#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> s;
    int curr;
    cin >> curr;
    while (curr--)
    {
        int val;
        cin >> val;
        s.insert(val);
    }
    cin >> curr;
    while (curr--)
    {
        int val;
        cin >> val;
        s.insert(val);
    }
    s.size() == n ? cout << "I become the guy." : cout << "Oh, my keyboard!";
    return 0;
}