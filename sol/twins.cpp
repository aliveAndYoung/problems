#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, sum = 0, t1 = 0, t2 = 0, i1 = 0;
    cin >> n;
    vector<int> vec(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    sort(vec.begin(), vec.end(), greater<int>());
    t1 = sum / 2;
    while (!(t2 > t1))
    {
        t2 += vec[i1];
        i1++;
    }
    cout << i1;

    return 0;
}
