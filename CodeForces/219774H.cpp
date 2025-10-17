// by LIFECOULDBEDREAM
// 2025/09/27 09:16

#include <bits/stdc++.h>
using namespace std;

void mySort(vector<int> &_vec)
{
    vector<int> sorted(201, 0);
    for (int a : _vec)
        sorted[a + 100]++;
    _vec = sorted;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> vec(n, 0);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    mySort(vec);
    for (int b = 0; b < 201; b++)
        for (int z = 0; z < vec[b]; z++)
            cout << b - 100 << " ";

    return 0;
}