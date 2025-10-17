#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int e, c = 0, u = 0;
    cin >> e;
    vector<int> events(e);
    for (int i = 0; i < e; i++)
    {
        int curr;
        cin >> curr;
        if (curr == -1 && c == 0)
        {
            u++;
        }
        else
        {
            c += curr;
        }
    }
    cout << u;

    return 0;
}