#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dimensions;
    cin >> dimensions;
    vector<vector<int>> myMatrix(52, vector<int>(52));
    vector<vector<int>> colFrequencies(dimensions + 2, vector<int>(1e5 + 2, 0));
    vector<vector<int>> rowFrequencies(dimensions + 2, vector<int>(1e5 + 2, 0));
    for (int i = 1; i <= dimensions; i++)
    {
        for (int j = 1; j <= dimensions; j++)
        {
            int curr;
            cin >> curr;
            myMatrix[i][j] = curr;
            colFrequencies[j][curr] += 1;
            rowFrequencies[i][curr] += 1;
        }
    }

    for (int q = 1; q <= dimensions; q++)
    {

        for (int w = 1; w <= dimensions; w++)
        {
            bool flag = true;
            int currCheck = myMatrix[q][w];

            if (currCheck != 1)
            {
                flag = false;
                for (int e = 1; e < currCheck; e++)
                {
                    if (colFrequencies[w][currCheck - e] && rowFrequencies[q][e])
                        flag = true;
                }
            }
            if (!flag)
            {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";

    return 0;
}