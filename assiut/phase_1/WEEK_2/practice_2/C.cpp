// by LIFECOULDBEDREAM
// 2026/03/31 17:11

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    n--;
    n--;
    stack<string> _s;
    string _str;
    cin >> _str;
    if (_str != "Header")
    {
        cout << "WA\n";
        return 0;
    }
    while (n--)
    {
        cin >> _str;
        if (_str == "EndHeader" || _str == "Header")
        {

            cout << "WA\n";
            return 0;
        }
        if (_str[0] == 'E')
        {
            if (_s.empty())
            {
                cout << "WA\n";
                return 0;
            }
            else
            {
                if ("End" + _s.top() == _str)
                    _s.pop();
                else
                {
                    cout << "WA\n";
                    return 0;
                }
            }
        }
        else
        {
            _s.push(_str);
        }
    }

    cin >> _str;
    if (_str != "EndHeader")
    {
        cout << "WA\n";
        return 0;
    }
    if (_s.empty())
        cout << "ACC\n";
    else
        cout << "WA\n";
    return 0;
}