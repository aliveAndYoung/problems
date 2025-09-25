// by LIFECOULDBEDREAM
// 2025/09/25 20:25

#include <bits/stdc++.h>
using namespace std;

string getBinary(long long a)
{
    string ans = "";
    for (int i = 31; i >= 0; i--)
    {

        if (a & (1 << i))
            ans += '1';
        else
            ans += '0';
    }
    return ans;
}

bool isPalindrom(long long a)
{
    string binRep = getBinary(a);
    bool isTrivial = true;
    deque<char> myNum;
    for (char digit : binRep)
    {
        if (digit == '1')
            isTrivial = false;
        if (isTrivial)
            continue;
        myNum.push_front(digit);
    }
    while (!myNum.empty())
    {
        if (myNum.front() != myNum.back())
            return false;
        myNum.pop_front();
        if (!myNum.empty())
            myNum.pop_back();
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long _a;
    cin >> _a;
    if (_a % 2 == 0 || !isPalindrom(_a))
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";

    return 0;
}