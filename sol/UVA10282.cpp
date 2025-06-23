#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, string> myDict;
    string line;
    while (getline(cin, line))
    {
        if (line.empty())
            break;

        size_t space_pos = line.find(' ');
        if (space_pos != string::npos)
        {
            string A = line.substr(0, space_pos);
            string B = line.substr(space_pos + 1);
            myDict[B] = A;
        }
    }
    string msg;
    while (cin >> msg)
        myDict[msg] == "" ? cout << "eh\n" : cout << myDict[msg] << "\n";

    return 0;
}