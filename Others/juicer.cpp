#include <iostream>
using namespace std;
int main()
{
    int n, b, d, counter = 0, waste = 0;
    cin >> n >> b >> d;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
        if (curr <= b)
        {
            waste += curr;
            if (waste > d)
            {
                counter++;
                waste = 0;
            }
        }
    }
    cout << counter;

    return 0;
}