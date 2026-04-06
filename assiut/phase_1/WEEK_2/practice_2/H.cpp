// by LIFECOULDBEDREAM
// 2026/04/07 00:53

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq;
    string curr;
    bool flag = false;
    int N;
    while (n--)
    {
        cin >> curr;
        if (curr == "back")
        {
            if (dq.empty())
                cout << "No job for Ada?\n";
            else
            {
                if (!flag)
                {
                    cout << dq.back() << '\n';
                    dq.pop_back();
                }
                else
                {
                    cout << dq.front() << '\n';
                    dq.pop_front();
                }
            }
        }
        else if (curr == "front")
        {
            if (dq.empty())
                cout << "No job for Ada?\n";
            else
            {
                if (!flag)
                {
                    cout << dq.front() << '\n';
                    dq.pop_front();
                }
                else
                {
                    cout << dq.back() << '\n';
                    dq.pop_back();
                }
            }
        }
        else if (curr == "reverse")
        {
            flag = !flag;
        }
        else if (curr == "push_back")
        {
            cin >> N;
            if (!flag)
                dq.push_back(N);
            else
                dq.push_front(N);
        }
        else if (curr == "toFront")
        {
            cin >> N;
            if (!flag)
                dq.push_front(N);
            else
                dq.push_back(N);
        }
    }

    return 0;
}