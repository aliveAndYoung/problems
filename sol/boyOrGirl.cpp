#include <iostream>
#include <unordered_map>
using namespace std;
bool isMale(string one)
{
    unordered_map<char, int> distinct;
    int count = 0;
    for (char ch : one)
    {
        if (distinct.find(ch) == distinct.end())
        {
            distinct[ch] = 1;
            count++;
        }
    }
    return count % 2 != 0;
}

int main()
{
    string name;
    cin >> name;
    if (isMale(name))
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    return 0;
}