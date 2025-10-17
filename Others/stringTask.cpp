#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isVowel(char v)
{
    char vowels[12] = {'A', 'E', 'I', 'O', 'U', 'Y', 'y', 'a', 'e', 'i', 'o', 'u'};
    for (char w : vowels)
    {
        if (v == w)
            return true;
    }
    return false;
}
void solve(string curr)
{
    vector<char> mySol;
    for (char c : curr)
    {
        if (isVowel(c))
            continue;
        mySol.push_back('.');
        mySol.push_back(tolower(c));
    }
    for (char m : mySol)
        cout << m;
}
int main()
{
    string myCase;
    cin >> myCase;
    solve(myCase);
    return 0;
}