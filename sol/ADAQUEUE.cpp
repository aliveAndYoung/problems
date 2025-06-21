#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    bool reverse = false;
    cin >> a;
    deque<int> herTasks;
    while (a--)
    {
        string q;
        cin >> q;
        if (q == "back")
        {
            if (herTasks.empty())
            {
                cout << "No job for Ada?\n";
            }
            else
            {
                if (reverse)
                {

                    cout << herTasks.front() << "\n";
                    herTasks.pop_front();
                }
                else
                {

                    cout << herTasks.back() << "\n";
                    herTasks.pop_back();
                }
            }
        }
        else if (q == "front")
        {
            if (herTasks.empty())
            {
                cout << "No job for Ada?\n";
            }
            else
            {
                if (reverse)
                {

                    cout << herTasks.back() << "\n";
                    herTasks.pop_back();
                }
                else
                {

                    cout << herTasks.front() << "\n";
                    herTasks.pop_front();
                }
            }
        }
        else if (q == "reverse")
        {
            reverse = !reverse;
        }
        else if (q == "push_back")
        {

            int n;
            cin >> n;
            if (reverse)

                herTasks.push_front(n);
            else
                herTasks.push_back(n);
        }
        else if (q == "toFront")
        {
            int n;
            cin >> n;
            if (reverse)
                herTasks.push_back(n);

            else
                herTasks.push_front(n);
        }
    }
    return 0;
}