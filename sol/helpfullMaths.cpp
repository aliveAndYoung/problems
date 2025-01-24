#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ones = 0, twos = 0, threes = 0;
    string exp, done = "";
    getline(cin, exp);
    for (int m = 0; m < exp.length(); m++)
    {
        switch (exp[m])
        {
        case '1':
            ones++;
            break;
        case '2':
            twos++;
            break;
        case '3':
            threes++;
            break;

        default:
            break;
        }
    }
    while (ones != 0)
    {
        done.append("1+");
        ones--;
    }
    while (twos != 0)
    {
        done.append("2+");
        twos--;
    }
    while (threes != 0)
    {
        done.append("3+");
        threes--;
    }
    done.pop_back();
    cout << done;

    return 0;
}