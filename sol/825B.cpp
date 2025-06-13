#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> myGrid(12, vector<int>(12, 0));
    for (int a = 1; a <= 10; a++)
    {
        for (int b = 1; b <= 10; b++)
        {
            char sqr;
            cin >> sqr;
            if (sqr == 'X')
                myGrid[a][b] = 1;
            else if (sqr == 'O')
                myGrid[a][b] = -1;
        }
    }
    for (int a = 1; a <= 10; a++)
    {
        for (int b = 1; b <= 10; b++)
        {
            int count = 0;

            if (b < 7)
            {
                for (int i = 0; i < 5; i++)
                    count += myGrid[a][b + i];
            }
            if (count == 4)
            {
                cout << "YES";
                return 0;
            }
            else
                count = 0;

            //

            if (a < 7)
            {
                for (int i = 0; i < 5; i++)
                    count += myGrid[a + i][b];
            }
            if (count == 4)
            {
                cout << "YES";
                return 0;
            }
            else
                count = 0;
            if (b < 7 && a < 7)
            {
                for (int i = 0; i < 5; i++)
                    count += myGrid[a + i][b + i];
            }
            if (count == 4)
            {
                cout << "YES";
                return 0;
            }
            else
                count = 0;
            if (a < 7 && b > 4)
            {
                for (int i = 0; i < 5; i++)
                    count += myGrid[a + i][b - i];
            }
            if (count == 4)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

    return 0;
}
