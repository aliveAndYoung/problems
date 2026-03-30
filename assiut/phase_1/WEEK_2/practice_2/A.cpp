// by LIFECOULDBEDREAM
// 2026/03/31 00:14

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<char> s;
    string str;
    cin >> str;
    int falsy = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            s.push(str[i]);
        else
        {
            if (s.empty())
                falsy++;
            else
                s.pop();
        }
    }
    cout << str.size() - falsy - s.size();
    return 0;
}