#include <iostream>
using namespace std;
int main()
{
    long long num, init, distress = 0;
    cin >> num >> init;
    for (int y = 0; y < num; y++)
    {
        char op;
        long long q;
        cin >> op >> q;
        switch (op)
        {
        case '+':
            init = init + q;
            break;
        case '-':
            if (q > init)
                distress++;
            else
                init -= q;
            break;

        default:
            break;
        }
    }
    cout << init << ' ' << distress;

    return 0;
}