#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    string order;
    vector<pair<int, int>> gates(27, {1e6, 0});
    cin >> order;
    for (int i = 0; i < int(order.length()); i++)
        gates[order[i] - 'A'] = {min(i, gates[order[i] - 'A'].first), max(i, gates[order[i] - 'A'].second)};

    vector<int> gaurdedGates(int(a + 2), 0);

    for (int i = 0; i < 26; i++)
    {
        int l = gates[i].first;
        int r = gates[i].second;
        if (l == 1e6)
            continue;
        gaurdedGates[l]++;
        gaurdedGates[r + 1]--;
    }
    for (int i = 1; i < a + 2; i++)
        gaurdedGates[i] += gaurdedGates[i - 1];
    for (int i = 0; i < a + 2; i++)
        if (gaurdedGates[i] > b)
        {
            cout << "YES";
            return 0;
        }

    cout << "NO";
    return 0;
}