#include <bits/stdc++.h>
using namespace std;

string sumDigits(string A)
{
    int sum = 0;
    for (char digit : A)
        sum += digit - '0';
    return to_string(sum);
}

int main()
{

    string myNumber;
    cin >> myNumber;
    if (myNumber.length() == 1)
    {
        cout << 0;
        return 0;
    }
    int iterations = 0, length = 2;
    while (length > 1)
    {
        iterations++;
        myNumber = sumDigits(myNumber);
        length = myNumber.length();
    }
    cout << iterations;

    return 0;
}