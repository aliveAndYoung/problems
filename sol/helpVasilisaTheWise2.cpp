#include <iostream>
#include <set>
using namespace std;
int main()
{
    float r1, r2, c1, c2, d1, d2, a, b, c, d;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    set<float> mySet = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    a = (r1 - d2 + c1) / 2;
    if (mySet.count(a))
        mySet.erase(a);
    b = (r1 - d1 + c2) / 2;
    if (mySet.count(b))
        mySet.erase(b);
    c = (r2 - d1 + c1) / 2;
    if (mySet.count(c))
        mySet.erase(c);
    d = (d1 - c1 + r2) / 2;
    if (mySet.count(d))
        mySet.erase(d);
    if (mySet.size() != 5)
    {
        cout << -1;
        return 0;
    }
    cout << a << ' ' << b << endl;
    cout << c << ' ' << d;
    return 0;
}