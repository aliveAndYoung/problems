#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    long long *cor = new long long[num];
    for (int t = 0; t < num; t++)
    {
        long long c;
        cin >> c;
        cor[t] = c;
    }
    for (int a = 0; a < num; a++)
    {
        long long minn, maxx;
        if (a == 0)
        {
            minn = cor[1] - cor[0];
            maxx = cor[num - 1] - cor[0];
        }
        else if (a == num - 1)
        {
            minn = cor[num - 1] - cor[num - 2];
            maxx = cor[num - 1] - cor[0];
        }
        else
        {
            minn = min(cor[a] - cor[a - 1], cor[a + 1] - cor[a]);
            maxx = max(cor[a] - cor[0], cor[num - 1] - cor[a]);
        }

        cout << minn << ' ' << maxx;
        if (a != num - 1)
            cout << endl;
    }
    delete[] cor;

    return 0;
}