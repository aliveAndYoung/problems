// by LIFECOULDBEDREAM
// 2025/08/16 20:36

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string remixed, original = "";
    cin >> remixed;
    int index = 0;
    bool space = false;
    while (index < remixed.length())
    {
        if (remixed[index] == 'W' && remixed[index + 1] == 'U' && remixed[index + 2] == 'B')
        {
            index += 3;
            space = true;
            continue;
        }
        else
        {
            if (space)
            {
                original += ' ';
            }
            original += remixed[index];
            index += 1;
            space = false;
        }
    }
    if (original[0] == ' ')
    {
        original.erase(original.begin());
    }
    if (original[original.size() - 1] == ' ')
    {
        original.erase(original.end() - 1);
    }

    cout << original;
    return 0;
}