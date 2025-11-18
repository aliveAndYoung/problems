// by LIFECOULDBEDREAM
// 2025/11/16 17:12

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     string s;
    cin >> s;
    
    vector<int> r, l;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'r') r.push_back(i + 1);
        else l.push_back(i + 1);
    }
    
    for (int x : r) cout << x << "\n";
    for (int i = l.size() - 1; i >= 0; i--) cout << l[i] << "\n";
    
    return 0;
}