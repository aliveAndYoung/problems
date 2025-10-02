// by LIFECOULDBEDREAM
// 2025/10/02 16:27

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    cin >> a;
    vector<int> freq(26, 0);
    for (char c : a)
        freq[c - 97]++;
    for (int i = 0; i < 26; i++)
        (freq[i] > 0) && (cout << char(i + 97) << " : " << freq[i] << "\n");

    return 0;
}