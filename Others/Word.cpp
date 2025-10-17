#include <iostream>
#include <cctype>
using namespace std;
int main()
{

    string word;
    int c = 0;
    cin >> word;
    for (char l : word)
    {
        if ((int)l < 91)
            c++;
        else
            c--;
    }
    if (c > 0)
    {
        for (char &m : word)
        {
            m = toupper(m);
        }
    }
    else
    {
        for (char &m : word)
        {
            m = tolower(m);
        }
    }
    cout << word;
    return 0;
}