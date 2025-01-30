#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> all(n, false);
    int current = n;

    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        all[c - 1] = true;
        while (current >= 1 && all[current - 1])
        {
            cout << current << " ";
            current--;
        }

        cout << endl;
    }

    return 0;
}