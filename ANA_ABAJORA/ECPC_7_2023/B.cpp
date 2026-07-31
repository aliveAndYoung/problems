// by LIFECOULDBEDREAM
// 2026/07/31 15:20

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string base, input;
    deque<string> ans;
    char curr;
    bool flag = true;
    cin >> input;
    for (int i = 0; i < input.size(); i++)
    {
        curr = input[i];
        if (curr == '<')
        {
            if (flag)
                ans.push_front(base);
            else
                ans.push_back(base);
            flag = true;
            base = "";
        }
        else if (curr == '>')
        {
            if (flag)
                ans.push_front(base);
            else
                ans.push_back(base);
            flag = false;
            base = "";
        }
        else
        {
            base = base + curr;
        }
    }
    if (flag)
        ans.push_front(base);
    else
        ans.push_back(base);
    for (auto it = ans.begin(); it != ans.end(); it++)
        cout << *it;

    return 0;
}