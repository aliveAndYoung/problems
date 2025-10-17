#include <iostream>
#include <vector>
#include <string>
using namespace std;
void checkHello(string checked)
{
    vector<char> rfrnc = {'h', 'e', 'l', 'l', 'o'};
    int currChar = 0;
    vector<char> toBChecked(checked.begin(), checked.end());
    for (char c : toBChecked)
    {
        if (c == rfrnc[currChar])
        {
            currChar++;
        }
    }
    if (currChar == 5)
        cout << "YES";
    else
        cout << "NO";
};
int main (){
    string theCase ;
    cin>> theCase ;
    checkHello(theCase) ;
    return 0;
}