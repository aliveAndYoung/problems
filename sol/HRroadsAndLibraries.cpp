// by LIFECOULDBEDREAM
// 2025/07/06 17:42

#include <bits/stdc++.h>
using namespace std;

long roadsAndLibraries(int n, int c_lib, int c_road, vector<vector<int>> cities)
{
    if (c_lib <= c_road)
        return n * c_lib;

    vector<vector<int>> adj(n);
    for (int i = 0; i < cities.size(); i++)
    {
        adj[cities[i][0] - 1].push_back(cities[i][1] - 1);
        adj[cities[i][1] - 1].push_back(cities[i][0] - 1);
    }
    vector<bool> isVisited(n, false);
    int pieces = 0;
    for (int w = 0; w < n; w++)
    {
        if (isVisited[w])
            continue;
        pieces++;
        isVisited[w] = true;

        queue<int> myQ;
        myQ.push(w);
        while (!myQ.empty())
        {
            int curr = myQ.front();
            myQ.pop();
            for (int y : adj[curr])
            {
                if (!isVisited[y])
                {
                    isVisited[y] = true;
                    myQ.push(y);
                }
            }
        }
    }
    return ((n - pieces) * c_road) + (c_lib * pieces);
}

int main()
{

    return 0;
}
// NOT DONE