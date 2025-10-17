#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    vector<int> kefa(n, 0);
    vector<int> sasha(n, 0);
    for (int i = 0; i < n; i++)
        cin >> kefa[i];
    for (int i = 0; i < n; i++)
        cin >> sasha[i];

    vector<int> kefaD(n, 0);
    kefaD[0] = kefa[0] - kefa[n - 1] + l;
    for (int i = 1; i < n; i++)
        kefaD[i] = kefa[i] - kefa[i - 1];
    vector<int> sashaD(n, 0);
    sashaD[0] = sasha[0] - sasha[n - 1] + l;
    for (int i = 1; i < n; i++)
        sashaD[i] = sasha[i] - sasha[i - 1];

    for (int p = 0; p < n; p++)
    {
        int flag = 0;
        for (int w = 0; w < n; w++)
            if (sashaD[(p + w) % n] == kefaD[w])
                flag++;
        if (flag == n)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}