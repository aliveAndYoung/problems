#include <iostream>
#include <vector>
using namespace std;
int main()

{
    long long n, m;
    cin >> n >> m;
    vector<long long> fn(5, 0);
    vector<long long> fm(5, 0);
    for (int i = 1; i <= n; i++)
        fn[i % 5]++;
    for (int i = 1; i <= m; i++)
        fm[i % 5]++;
    long long all = (fm[0] * fn[0]) + (fm[1] * fn[4]) + (fm[2] * fn[3]) + (fm[3] * fn[2]) + (fm[4] * fn[1]);
    cout << all;
    return 0;
}

// time Limit
//  {
//      int n, m, all = 0;
//      cin >> n >> m;
//      for (int i = 1; i <= n; i++)
//      {
//          int seek = (i - (i % 5) + 5);
//          while (seek - i > 0 && seek - i <= m)
//          {
//              all++;
//              seek += 5;
//          }
//      }
//      cout << all;
//      return 0;
//  }