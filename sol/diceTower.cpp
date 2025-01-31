#include <iostream>
using namespace std;
int main()
{
    int n, top, comp;
    bool flag = true;
    cin >> n >> top;
    comp = 7 - top;
    for (int i = 0; i < n * 2; i++)
    {
        int curr;
        cin >> curr;
        if (curr == top || curr == comp)
            flag = false;
    }
    flag ? cout << "YES" : cout << "NO";

    return 0;
}