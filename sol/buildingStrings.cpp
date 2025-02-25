#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        int l1, l2, sum = 0;
        cin >> l1 >> l2;

        string chars, digits, wanted;
        cin >> chars >> digits >> wanted;
        map<char, char> myMap;
        for (int i = 0; i < chars.length(); ++i)
        {
            if (myMap.find(chars[i]) == myMap.end())
                myMap[chars[i]] = digits[i];
            else
                myMap[chars[i]] = min(myMap[chars[i]], digits[i]);
        }
        for (char p : wanted)
        {
            if (myMap.find(p) == myMap.end())
                flag = false;
            else
                sum += myMap[p] - '0';
        }
        flag ? cout << sum << endl : cout << -1 << endl;
    }
    return 0;
}