// by LIFECOULDBEDREAM
// 2025/11/20 12:44

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int findFloor(int n)
{
    if (n <= 0)
        return 0;
    double result = (sqrt(1 + 8.0 * n) - 1) / 2.0;
    return static_cast<int>(ceil(result));
}
int findColumn(int n)
{
    if (n <= 0)
        return 0;
    int row = findFloor(n);
    int start_of_row = (row * (row - 1)) / 2 + 1;
    return n - start_of_row + 1;
}

// void MY_SOLVE(int _a, set<int, greater<int>> &_s)
// {
//     if (_a == 0)
//         return;
//     if (_s.count(_a))
//         return;
//     _s.insert(_a);
//     int floor = findFloor(_a);
//     int left = _a - floor;
//     if (findFloor(left) == floor - 1)
//         MY_SOLVE(left, _s);
//     int right = _a - (floor - 1);
//     if (findFloor(right) == floor - 1)
//         MY_SOLVE(right, _s);
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<ll>> v(2024, vector<ll>(2024, 0));
    ll counter = 1;

    for (int i = 1; i <= 2023; i++)
    {
        for (int j = 1; j <= 2023; j++)
        {
            if (i >= j)
            {
                v[i][j] = counter;
                counter++;
            }
        }
    }

    for (int i = 1; i <= 2023; i++)
    {
        for (int j = 0; j <= 2023; j++)
        {
            if (v[i][j] != 0)
            {
                v[i - j + 1][j] = v[i][j];
            }
        }
    }

    for (int i = 1; i <= 2023; i++)
    {
        for (int j = 1; j <= 2023; j++)
        {
            v[i][j] = (v[i][j]) * (v[i][j]);
        }
    }

    for (int i = 1; i <= 2023; i++)
    {
        for (int j = 1; j <= 2023; j++)
        {
            v[i][j] += v[i][j - 1];
        }
    }
    for (int i = 1; i <= 2023; i++)
    {
        for (int j = 1; j <= 2023; j++)
        {
            v[i][j] += v[i - 1][j];
        }
    }
    int t;
    cin >> t;

    while (t--)
    {
        int q;
        cin >> q;
        int col = findColumn(q);
        int row = findFloor(q) - col + 1;
        cout << v[row][col] << "\n";
    }

    return 0;
}