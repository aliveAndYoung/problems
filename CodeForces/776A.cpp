#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string> potentialVictims;
    string A, B;
    cin >> A >> B;
    potentialVictims.insert(A);
    potentialVictims.insert(B);
    int days;
    cin >> days;
    while (days--)
    {
        for (string vic : potentialVictims)
            cout << vic << " ";

        cin >> A >> B;
        potentialVictims.erase(A);
        potentialVictims.insert(B);
        cout << "\n";
    }

    for (string vic : potentialVictims)
        cout << vic << " ";

    return 0;
}