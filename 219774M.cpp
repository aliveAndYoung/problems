// by LIFECOULDBEDREAM
// 2025/09/28 17:28

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    pair<int, int> myMax(-0x7fffffff, 0), myMin(0x7fffffff, 0);
    cin >> n;

    vector<int>
        _vec(n, 0);

    for (int i = 0; i < n; i++)
        cin >> _vec[i];
    for (int i = 0; i < n; i++)
        (_vec[i] > myMax.first) && (myMax = {_vec[i], i}).first;

    for (int i = 0; i < n; i++)
        (_vec[i] < myMin.first) && (myMin = {_vec[i], i}).first;

    // swap
    int temp = myMin.first;
    _vec[myMin.second] = myMax.first;
    _vec[myMax.second] = temp;
    for (int i = 0; i < n; i++)
        cout << _vec[i] << " ";
    return 0;
}