#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<int> students;
    vector<int> ones;
    vector<int> twos;
    vector<int> threes;

    for (int m = 0; m < num; m++)
    {
        int c;
        cin >> c;
        switch (c)
        {
        case 1:
            ones.push_back(m + 1);
            break;
        case 2:
            twos.push_back(m + 1);
            break;
        default:
            threes.push_back(m + 1);
            break;
        }
    }
    int teams = min(ones.size(), min(twos.size(), threes.size()));
    cout << teams << endl;
    while (!ones.empty() && !twos.empty() && !threes.empty())
    {
        cout << ones.back() << ' ' << twos.back() << ' ' << threes.back() << endl;
        ones.pop_back();
        twos.pop_back();
        threes.pop_back();
    }
    return 0;
}