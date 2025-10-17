#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int lines;
    cin >> lines;
    vector<int> birds;
    for (int m = 0; m < lines; m++)
    {
        int p;
        cin >> p;
        birds.push_back(p);
    }

    int shots;
    cin >> shots;
    for (int z = 0; z < shots; z++)
    {
        int l, n;
        cin >> l >> n;
        if (l > 1)
            birds[l - 2] += n - 1;
        if (l < lines)
            birds[l] += birds[l - 1] - n;
        birds[l - 1] = 0;
    }
    for (int b = 0; b < lines; b++)
        cout << birds[b] << endl;

    return 0;
}