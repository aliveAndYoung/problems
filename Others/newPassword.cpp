#include <iostream>
using namespace std;
int main()
{
    int len, dist, curr = -1;
    string pass = "";
    cin >> len >> dist;
    for (int i = 0; i < len; i++)
    {
        if (curr < dist - 1)
            curr++;
        else
            curr = 0;
        char added = 97 + curr;
        pass += added;
    }
    cout << pass;

    return 0;
}