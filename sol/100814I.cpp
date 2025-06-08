#include <bits/stdc++.h>
using namespace std;

int getBinaryOnes(int C)
{
    int counter = 0;
    while (C)
    {
        if (C & 1)
            counter++;
        C /= 2;
    }
    return counter;
}

int getDist(int &A, int &B)
{
    return getBinaryOnes(int(A ^ B));
}

int getMaxDist(vector<int> &NUMS)
{
    int counter = 0;
    for (int i = 0; i < int(NUMS.size()) - 1; i++)
    {
        for (int j = i + 1; j < int(NUMS.size()); j++)
        {
            counter = max(counter, getDist(NUMS[i], NUMS[j]));
        }
    }
    return counter;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> myVec(N, 0);
        while (N--)
            cin >> myVec[N];
        cout << getMaxDist(myVec) << "\n";
    }
    return 0;
}