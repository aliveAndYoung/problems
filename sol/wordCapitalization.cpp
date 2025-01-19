#include <iostream>
#include <vector>
#include <string>
using namespace std;
void capitalize(string myCase)
{
    myCase[0] = toupper(myCase[0]);
    cout << myCase;
}
int main()
{
    string theCase;
    cin >> theCase;
    capitalize(theCase);
    return 0;
}