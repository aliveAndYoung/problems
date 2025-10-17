#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
    int curr = a;
    a = b;
    b = curr;
}

void gravityChange(vector<int> &myVect)
{
    int length = myVect.size();
    for (int i = 1; i < length; i++)
    {

        int index = i;
        while (index > 0 && myVect[index] < myVect[index - 1])
        {
            swap(myVect[index], myVect[index - 1]);
            index--;
        }
       
    }
}

int main()
{
    vector<int> list ;
    int col , number ;
    cin >> col ;
    while (cin>> number)
    {
        list.push_back(number);
        if (cin.peek() == '\n') break;
    }
    
   
    gravityChange(list);
     for (int p = 0; p < list.size(); p++)
        {
            cout << list[p] << " ";
        }
        cout << endl;

    return 0;
}