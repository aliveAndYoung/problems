// by LIFECOULDBEDREAM
// 2025/09/27 09:39

#include <bits/stdc++.h>
using namespace std;

int getSol(vector<int> _vec, int _a)
{
    int min = 0x7fffffff;

    for (int i = 0; i < _a-1; i++)
        for (int j = i+1; j < _a; j++)
            ((_vec[i] + _vec[j] + j - i ) < min) && (min = (_vec[i] + _vec[j] + j -i));
    return min;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a;
    cin >> n;
    vector<int> myVec(100, 0);
    while (n--)
    {
        cin >> a;
        for (int i = 0; i < a; i++)
            cin >> myVec[i];
        cout << getSol(myVec, a) << "\n";
    }

    return 0;
}