// by LIFECOULDBEDREAM
// 2025/08/19 08:23

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int firstDiagonal = 0, secondDiagonal = n - 1;
    char firstChar, secondChar;
    cin >> firstChar;
    cin >> secondChar;
    if (firstChar == secondChar)
    {
        cout << "NO";
        return 0;
    }
    int skipTwo = 0;
    for (int i = 0; i < n; i++)
    {

        for (int ii = 0; ii < n; ii++)
        {

            if (skipTwo < 2)
            {
                skipTwo += 1;
                continue;
            }

            char curr;
            cin >> curr;

            if (ii == firstDiagonal || ii == secondDiagonal )
            {
                if (curr != firstChar)
                {
                    cout << "NO";
                    return 0;
                }
            }
            else
            {
                if (curr != secondChar)
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
        firstDiagonal+=1 ; 
        secondDiagonal -=1 ; 
    }

    cout << "YES";
    return 0;
}
