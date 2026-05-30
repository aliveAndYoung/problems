// by LIFECOULDBEDREAM
// 2026/05/30 10:34

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    queue<string> order;
    map<string, string> _mapp;
    cin >> a;
    string temp2, temp1;

    for (int i = 0; i < a; i++)
    {
        cin >> temp1;
        if (temp1 == "define" || temp1 == "print" || temp1 == "read")
        {
            cin >> temp2;
            order.push(temp1);
            order.push(temp2);
        }
        else
        {
            int eq, pl;
            eq = temp1.find('=');
            pl = temp1.find('+');

            temp2 = temp1.substr(0, eq);
            order.push(temp2);
            temp2 = temp1.substr(eq + 1 , pl - eq - 1);
            order.push(temp2);
            temp2 = temp1.substr(pl+1);
            order.push(temp2);
        }
    }

    cin >> b;
    if (a != b)
    {
        cout << "NO\n";
        return 0;
    }
    string temp3, temp4;
    for (int i = 0; i < b; i++)
    {
        cin >> temp1;
        if (temp1 == "define" || temp1 == "print" || temp1 == "read")
        {
            cin >> temp2;
            temp3 = order.front();
            order.pop();
            temp4 = order.front();
            order.pop();
            if (temp1 != temp3)
            {
                cout << "NO\n";
                return 0;
            }
            if (temp1 == "define")
            {
                _mapp[temp4] = temp2;
                continue;
            }
            if (_mapp[temp4] != temp2)
            {
                cout << "NO\n";
                return 0;
            }
        }
        else
        {
            int eq, pl;
            eq = temp1.find('=');
            pl = temp1.find('+');

            temp2 = temp1.substr(0, eq);
            temp3 = order.front();
            order.pop();
            if (_mapp[temp3] != temp2)
            {
                cout << "NO\n";
                return 0;
            }
            temp2 = temp1.substr(eq + 1, pl - eq - 1);
            temp3 = order.front();
            order.pop();
            if (_mapp[temp3] != temp2)
            {
                cout << "NO\n";
                return 0;
            }

            temp2 = temp1.substr(pl+1);
            temp3 = order.front();
            order.pop();
            if (_mapp[temp3] != temp2)
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}