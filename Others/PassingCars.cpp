#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A)
{
    int zeros = 0;
    long long pairs = 0;
    for (int car : A)
    {
        if (car == 0)
            zeros++;
        else
        {
            pairs += zeros;
            if (pairs > 1000000000)
                return -1;
        }
    }
    return pairs;
}