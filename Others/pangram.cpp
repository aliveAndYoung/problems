#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string c;
    cin >> c;
    // getline(cin , c);
    vector<bool> vec(26, false);
    for (int b = 0; b < n; b++)
    {
        if (c[b] > 64 && c[b] < 91)
        {
            vec[c[b] - 65] = true;
        }
        else
        {
            vec[c[b] - 97] = true;
        }
    }
    if (count(vec.begin(), vec.end(), false) > 0)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}