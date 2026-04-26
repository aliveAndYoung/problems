// by LIFECOULDBEDREAM
// 2026/04/26 04:10

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string command, param;
    deque<string> _dq1, _dq2;
    for (int i = 0; i < n; i++)
    {
        cin >> command;
        if (command == "pwd")
        {
            _dq2 = _dq1;
            cout << '/';
            while (!_dq2.empty())
            {
                cout << _dq2.back() << '/';
                _dq2.pop_back();
            }
            cout << '\n';
        }
        else
        {
            cin >> param;
            if (param[0] == '/')
            {
                _dq1.clear();
            }
            string curr = "";
            for (int i = 0; i < param.size(); i++)
            {
                if (param[i] != '/')
                {
                    curr += param[i];
                }
                else
                {
                    if (curr.size() > 0)
                    {
                        if (curr == "..")
                            _dq1.pop_front();
                        else
                            _dq1.push_front(curr);
                        curr = "";
                    }
                }
            }
            if (curr != "")
            {
                if (curr == "..")
                    _dq1.pop_front();
                else
                    _dq1.push_front(curr);
            }
            curr = "";
        }
    }
    return 0;
}