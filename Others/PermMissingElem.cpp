#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A)
{
    int maxNum = A.size();
    vector<int> freq;
    freq.assign(10, 0);
    for (int i = 0; i < maxNum; i++)
        freq[A[i]]++;

    auto iter = find(freq.begin(), freq.end(), 0);
    int index = distance(freq.begin(), iter);
    return index;
}
int main()
{

    return 0;
}