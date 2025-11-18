// by LIFECOULDBEDREAM
// 2025/11/16 21:12

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        map<string, int> freq;
        while (n--)
        {
            vector<int> v(5);
            for (int i = 0; i < 5; i++)
                cin >> v[i];
            sort(v.begin(), v.end());
            string key = to_string(v[0]) + "," + to_string(v[1]) + "," + to_string(v[2]) + "," + to_string(v[3]) + "," + to_string(v[4]);
            freq[key]++;
        }
        int max_freq = 0, occurrences = 0;
        for (auto it : freq)
        {
            if (it.second > max_freq)
            {
                max_freq = it.second;
                occurrences = it.second;
            }
            else if (it.second == max_freq)
            {
                occurrences += it.second;
            }
        }
        cout << occurrences << "\n";
    }

    return 0;
}