// by LIFECOULDBEDREAM
// 2025/10/17 15:39

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    vector<int> theVec(a);
    for (int i = 0; i < a; i++)
        cin >> theVec[i];
    string command = "";
    while (b--)
    {
        cin >> command;
        if (command == "pop_back")
            theVec.pop_back();

        else if (command == "front")
            cout << theVec[0] << "\n";
        else if (command == "back")
            cout << theVec[int(theVec.size()) - 1] << "\n";
        else if (command == "sort")
        {
            int l, r;
            cin >> l >> r;
            sort(theVec.begin() + l - 1, theVec.begin() + r);
        }
        else if (command == "reverse")
        {
            int l, r;
            cin >> l >> r;
            reverse(theVec.begin() + l - 1, theVec.begin() + r);
        }
        else if (command == "print")
        {
            int pos;
            cin >> pos;
            cout << theVec[pos - 1] << "\n";
        }
        else if (command == "push_back")
        {
            int x;
            cin >> x;
            theVec.push_back(x);
        }
    }

    return 0;
}