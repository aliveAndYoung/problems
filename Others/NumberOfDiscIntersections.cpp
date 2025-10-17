#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solution(vector<int> &A)
{
    struct disc
    {
        ll radius;
        int center;
        pair<ll, ll> diameter;
        bool operator<(disc operand)
        {
            return this->radius < operand.radius;
        }
    };
    vector<disc> myDiscs(int(A.size()));
    for (int i = 0; i < int(A.size()); i++)
    {
        myDiscs[i] = {.radius = A[i], .center = i, .diameter = {i - A[i], i + A[i]}};
    }

    sort(myDiscs.begin(), myDiscs.end());
    reverse(myDiscs.begin(), myDiscs.end());
    ll counter = 0;
    for (int i = 0; i < int(A.size()) - 1; i++)
    {
        for (int s = i + 1; s < int(A.size()); s++)
        {
            if ((myDiscs[s].diameter.first >= myDiscs[i].diameter.first && myDiscs[s].diameter.first <= myDiscs[i].diameter.second) ||
                (myDiscs[s].diameter.second <= myDiscs[i].diameter.second && myDiscs[s].diameter.second >= myDiscs[i].diameter.first) ||
                (myDiscs[s].center >= myDiscs[i].diameter.first && myDiscs[s].center <= myDiscs[i].diameter.second))
            {
                counter++;
                if (counter > 1e7)
                    return -1;
            }
        }
    }
    return counter;
}
// N**2 <====>> TLE :(