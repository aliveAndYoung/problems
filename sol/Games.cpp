#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int teams, times = 0;
    cin >> teams;
    vector<int> home;
    vector<int> away;
    for (int x = 0; x < teams; x++)
    {
        int h, a;
        cin >> h >> a;
        home.push_back(h);
        away.push_back(a);
    }
    for (int x = 0; x < teams; x++)
    {
        for (int y = 0; y < teams; y++)
        {
            if (home[x] == away[y])
                times++;
        }
    }
    cout<< times ;

    return 0;
}