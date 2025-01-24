#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int *to = new int[num];
    for (int i = 0; i < num; i++)
    {
        int c;
        cin >> c;
        to[c - 1] = i+1;
    }
    for (int p = 0; p < num; p++)
    {
        cout << to[p] << ' ';
    }

    delete[] to;
    return 0;
}