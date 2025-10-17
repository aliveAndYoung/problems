#include <iostream>
#include <cctype>
using namespace std;
int compare(string one, string two)
{
    for (int i = 0; i < one.length(); i++)
    {
        if (static_cast<int>(toupper(one[i])) - static_cast<int>(toupper(two[i])) > 0)
        {
            return 1;
        }
        else if (static_cast<int>(toupper(one[i])) - static_cast<int>(toupper(two[i])) < 0)
        {

            return -1;
        }
    };
    return 0;
};
int main()
{
    string a, b;
    cin >> a >> b;
    cout << compare(a, b);
    return 0;
}