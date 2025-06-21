#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<string> order;
    set<string> distinct;
    vector<string> names(n);
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }
    for (int i = n - 1; i >= 0; i--)

    {

        if (distinct.find(names[i]) == distinct.end())
        {
            order.emplace_back(names[i]);
            distinct.insert(names[i]);
        }
    }
    for (string name : order)
        cout << name << "\n";

    return 0;
}