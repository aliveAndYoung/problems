#include <iostream>
// #include <algorithm>
#include <string>
using namespace std;
int main()
{
    string in, rem;
    cin >> in >> rem;
    int pan = ((in.length() + rem.length() - 1) / 2);
    if ((in.length() + rem.length() - 1) % 2 != 0)
    {
        cout << "Impossible";
        return 0;
    }
    int split = in.find('|');
    string left = in.substr(0, split);
    string right = in.substr(split + 1, in.length() - split);
    while (!rem.empty() && left.length() < pan)
    {
        left += rem.back();
        rem.pop_back();
    }
    while (!rem.empty() && right.length() < pan)
    {
        right += rem.back();
        rem.pop_back();
    }
    if (left.length() == right.length() && rem.length() == 0)
    {
        cout << left << '|' << right;
    }
    else
    {
        cout << "Impossible";
    }

    // cout << right << right .length();

    return 0;
}