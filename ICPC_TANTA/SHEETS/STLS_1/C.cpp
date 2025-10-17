// by LIFECOULDBEDREAM
// 2025/10/17 17:26

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    deque<int> theVec;

    string command = "";
    while (a--)
    {
        cin >> command;
        if (command == "pop_back")
            theVec.pop_back();
        if (command == "pop_front")
            theVec.pop_front();

        else if (command == "front")
            cout << theVec.front() << "\n";
        else if (command == "back")
            cout << theVec.back() << "\n";
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
        else if (command == "push_front")
        {
            int x;
            cin >> x;
            theVec.push_front(x);
        }
    }

    return 0;
}