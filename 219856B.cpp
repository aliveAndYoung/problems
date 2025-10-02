// by LIFECOULDBEDREAM
// 2025/10/02 15:12

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    getline(cin, a);
    auto end = a.find('\\');
    cout << a.substr(0, end);

    return 0;
}