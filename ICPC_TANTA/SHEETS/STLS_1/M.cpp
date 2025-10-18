// by LIFECOULDBEDREAM
// 2025/10/18 09:59

// passed


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    queue<int> unsorted;
    priority_queue<int, vector<int>, greater<int>> sorted;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int x;
            cin >> x;
            unsorted.push(x);
        }
        else if (type == 2)
        {
            if (!sorted.empty())
            {
                cout << sorted.top() << "\n";
                sorted.pop();
            }
            else
            {
                cout << unsorted.front() << "\n";
                unsorted.pop();
            }
        }
        else if (type == 3)
        {
            while (!unsorted.empty())
            {
                sorted.push(unsorted.front());
                unsorted.pop();
            }
        }
    }

    return 0;
}

//  border line
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n, start = 0;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         if (x == 1)
//         {
//             int a;
//             cin >> a;
//             v.push_back(a);
//         }
//         else if (x == 2)
//         {
//             if (!v.empty())
//             {
//                 cout << v[start] << "\n";
//                 start++;
//             }
//         }
//         else if (x == 3)
//             sort(v.begin() + start, v.end());
//     }

//     return 0;
// }