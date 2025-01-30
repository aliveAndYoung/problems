#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int all, help;
    cin >> all;
    help = all;
    vector<int> vec(all, 0);
    for (int i = 0; i < all; i++)
        cin >> vec[i];
    int min = *(min_element(vec.begin(), vec.end()));
    int max = *(max_element(vec.begin(), vec.end()));
    int cMax = count(vec.begin(), vec.end(), max);
    int cMin = count(vec.begin(), vec.end(), min);
    if (min == max)
        help -= cMax;
    else
        help -= (cMax + cMin);
    if (all < 3)
        cout << 0;
    else
        cout << help;
    return 0;
}