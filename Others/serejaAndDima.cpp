#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<int> cards(num);
    for (int i = 0; i < num; i++)
    {
        cin >> cards[i];
    }
    int left = 0, right = num - 1, seraj = 0, dima = 0;
    bool isDima = false;
    for (int i = 0; i < num; i++)
    {
        if (isDima)
        {
            if (cards[left] > cards[right])
            {
                dima += cards[left];
                left++;
            }
            else
            {
                dima += cards[right];
                right--;
            }
            isDima = false ;
        }
        else
        {
            if (cards[left] > cards[right])
            {
                seraj += cards[left];
                left++;
            }
            else
            {
                seraj += cards[right];
                right--;
            }
            isDima = true ;
        }
    }
    cout<< seraj << ' ' << dima ;

    return 0;
}