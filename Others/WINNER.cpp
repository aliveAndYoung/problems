#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> rounds;
    map<string, int> tracking;
    while (n--)
    {
        string player;
        int score;
        cin >> player >> score;
        rounds.push_back({player, score});
        tracking[player] += score;
    }
    int maxScore = -1e7;
    set<string> currWinners;
    for (auto it = tracking.begin(); it != tracking.end(); it++)
    {
        maxScore = max(maxScore, it->second);
    }
    for (auto it = tracking.begin(); it != tracking.end(); it++)
    {
        if (it->second == maxScore)
        {
            currWinners.insert(it->first);
        }
    }
    map<string, int> whoWins;
    for (pair<string, int> round : rounds)
    {
        if (currWinners.find(round.first) != currWinners.end())
        {
            whoWins[round.first] += round.second;
            if (whoWins[round.first] >= maxScore)
            {
                cout << round.first;
                return 0;
            }
        }
    }

    return 0;
}
// ACCEPTED :)