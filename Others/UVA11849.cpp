#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        int N, M, counter = 0;
        cin >> N >> M;
        if (!N && !M)
            break;
        set<long long> mySet;
        while (N--)
        {
            long long curr1;
            cin >> curr1;
            mySet.insert(curr1);
        }
        while (M--)
        {
            long long curr2;
            cin >> curr2;
            if (mySet.find(curr2) != mySet.end())
            {
                counter++;
            }
        }
        cout << counter << "\n";
    }

    return 0;
}