#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    queue<ll> myQueue;
    while (n--)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            ll m;
            cin >> m;
            myQueue.push(m);
        }
        else if (q == 2)
        {
            if (!myQueue.empty())
                myQueue.pop();
        }
        else
        {
            if (myQueue.empty())
                cout << "Empty!\n";
            else
                cout << myQueue.front() << "\n";
        }
    }
}