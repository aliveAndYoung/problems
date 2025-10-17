#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ways;
    cin >> ways;
    vector<int> vec(n, 0);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    int time = 10e8;
    size_t coll = 0;
    size_t pos = ways.find("RL");
    if (pos == string::npos)
    {
        cout << -1;
        return 0;
    }
    while (pos != string::npos)
    {
        int curTime = (vec[pos + 1] - vec[pos]) / 2;
        time = min(time, curTime);
        pos = ways.find("RL", pos + 1);
    }
    cout << time;
    return 0;
}