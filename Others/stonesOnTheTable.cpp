#include <iostream>
using namespace std;
int main()
{
    int l, s = 0;
    cin >> l;

    string m;
    cin >> m;

    char curr;
    for (int i = 0; i < l; i++)
    {
        if (m[i] == curr)
        {
            s++;
        }
        else
        {
            curr = m[i];
        }
    }
    cout << s ;

    return 0;
}