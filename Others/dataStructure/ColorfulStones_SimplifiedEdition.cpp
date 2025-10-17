#include <iostream>
using namespace std;
int main()
{

    string s, t;
    int pos = 0;
    cin >> s >> t;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[pos])
            pos++;
    }
    cout << pos + 1 ;

    return 0;
}