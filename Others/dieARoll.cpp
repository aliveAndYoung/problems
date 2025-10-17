#include <iostream>
using namespace std;
int main()
{
    int y, t;
    cin >> y >> t;
    int max = (y > t) ? y : t;
    switch (7 - max)
    {
    case 0:
        cout << "0/1";
        break;
    case 1:
        cout << "1/6";
        break;
    case 2:
        cout << "1/3";
        break;
    case 3:
        cout << "1/2";
        break;
    case 4:
        cout << "2/3";
        break;
    case 5:
        cout << "5/6";
        break;
    default:
        cout << "1/1";
        break;
    }

    return 0;
}