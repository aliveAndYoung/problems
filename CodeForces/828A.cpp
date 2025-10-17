#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c = 0, counter = 0;

    cin >> n >> a >> b;
    while (n--)
    {
        int curr;
        cin >> curr;
        if (curr == 2)
        {
            counter += (2 * (b < 1));
            b--;
        }
        else
        {
            if (a)
                a--;
            else
            {
                if (b > 0)
                {
                    b--;
                    c++;
                }
                else
                {
                    if (c > 0)
                        c--;
                    else
                        counter++;
                }
            }
        }
    }
    cout << counter;

    return 0;
}