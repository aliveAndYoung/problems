#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dimensions;
    cin >> dimensions;
    vector<vector<int>> myMatrix(52, vector<int>(52));
    for (int i = 1; i <= dimensions; i++)
    {
        for (int j = 1; j <= dimensions; j++)
        {
            int curr;
            cin >> curr;
            myMatrix[i][j] = curr;
        }
    }

// frequenciesss in here 
    vector<vector<int>> frequencies(2 * dimensions + 2 , vector<int>(52) );
   
    return 0;
}