// by LIFECOULDBEDREAM
// 2025/09/19 12:09

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int days;
    cin >> days;
    int years = days / 365;
    int months = (days - (years * 365)) / 30;
    cout << years << " years\n";
    cout << months << " months\n";
    cout << days - (years * 365) - (months * 30) << " days";

    return 0;
}