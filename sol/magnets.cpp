#include <iostream>
using namespace std;
int main()
{
    int g, a = 0;
    cin >> g;
    string curr = "0";
    for (int i = 0; i < g; i++)
    {
        string magnet;
        cin >> magnet;
        if (curr != magnet)
        {
            a++;
            curr = magnet;
        }
    }
    cout << a;
    return 0;
}