#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, kk;
    cin >> n >> kk;
    vector<int> vec((2 * n) + 1, 0);
    for (int i = 1; i <= (2 * n) + 1; i++)
        cin >> vec[i - 1];
    for (int k = 0; k < (2 * n) + 1; k++)
    {
        if ((k + 1) % 2 == 0 && vec[k - 1] < vec[k] - 1 && vec[k] - 1 > vec[k + 1] && kk > 0)
        {
            vec[k]--;
            kk--;
        }
        cout << vec[k] << " ";
    }

    return 0;
}