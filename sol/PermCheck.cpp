#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A)
{
    vector<int> vec(100001, 0);
    for (int element : A)
    {
        if (element > 100000)
            return 0;
        else
            vec[element - 1] = 1;
    }
    // Search for the index for the first 0
    auto ptr = search(A.begin(), A.end(), 0);
    int index = distance(ptr, A.begin());
    if (index == A.size())
        return 1;
    else
        return 0;
}
int main()
{

    return 0;
}