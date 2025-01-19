#include <iostream>
#include <vector>
using namespace std;

void wayTooLong(string testCase)
{
    vector<char> sol(testCase.begin(), testCase.end());
    if (sol.size() > 10)
    {
        cout << sol[0] << sol.size() - 2 << sol.back()<<endl;
    }
    else
    {
        for (char c : sol)
        {
            cout << c;
        }
            cout << endl;
    }
};

int main()
{
    int num;
    cin >> num;
    vector <string> cases ;
    string line ;
    while( getline(cin, line)  ){
        cases.push_back(line) ;
    }
    for (string outp : cases)
    {
        wayTooLong(outp);
    }

    return 0;
}