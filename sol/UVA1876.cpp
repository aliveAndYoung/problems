#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        deque<int> myDeck;
        vector<int> discarded(n - 1, 0);

        for (int i = 1; i <= n; i++)
            myDeck.push_back(i);

        for (int i = 0; i < n - 1; i++)
        {
            discarded[i] = myDeck.front();
            myDeck.pop_front();
            int moved = myDeck.front();
            myDeck.pop_front();
            myDeck.push_back(moved);
        }
        cout << "Discarded cards:";
        for (int i = 0; i < n - 1; i++)
        {
            cout << " " << discarded[i];
            if (i != n - 2)
                cout << ",";
        }
        cout << "\nRemaining card: " << myDeck.front() << "\n";
    }
}
