#include <iostream>
using namespace std;
int main()
{
    string init, final = "";
    cin >> init;
    for (char i : init)
    {
        if (i > 52)
            final += char(48 + 9 - (i - 48));
        else
            final += i;
    }
    if (final[0] == '0')
        final[0] = '9';
    cout << final;

    return 0;
}