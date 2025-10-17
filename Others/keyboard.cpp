#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    char shift;
    cin >> shift;
    int s = shift == 'R' ? -1 : 1;
    string text, out = "", l = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> text;
    for (int i = 0; i < text.length(); i++)
        out += l[l.find(text[i]) + s];
    cout << out;

    return 0;
}