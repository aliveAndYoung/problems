#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, w, count = 0;
    cin >> l >> w;
    vector<pair<int, int>> blackSqrs(1);
    for (int i = 1; i <= l; i++)
    {
        for (int r = 1; r <= w; r++)
        {
            char curr;
            cin >> curr;
            if (curr == 'B')
            {
                count++;
                blackSqrs.push_back({i, r});
            }
        }
    }
    if (count == 1)
    {
        cout << 0;
        return 0;
    }
    else if (count == 0)
    {

        cout << 1;
        return 0;
    }

    for (int dim = ceil(sqrt(count)); dim <= min(l, w); dim++)
    {
        for (int b = 1; b <= l; b++)
        {
            for (int c = 1; c <= w; c++)
            {
                if (b + dim - 1 <= l && c + dim - 1 <= w)
                {

                    int within = 0;
                    for (int m = 1; m <= count; m++)
                    {

                        if (b <= blackSqrs[m].first && c <= blackSqrs[m].second && blackSqrs[m].first - b < dim && blackSqrs[m].second - c < dim)
                        {
                            within++;
                        }
                    }

                    if (within == count)
                    {
                        cout << (dim * dim) - count;
                        return 0;
                    }
                }
            }
        }
    }

    cout << -1;
    return 0;
}
