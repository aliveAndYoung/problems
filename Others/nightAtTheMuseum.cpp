#include <iostream>
using namespace std;

int main()
{
    string word;
    int moves = 0;
    int curr_pos = 0;
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        int curr_char = word[i] - 97;
        int diff = abs(curr_char - curr_pos);
        curr_pos = curr_char;
        diff <= 13 ? moves += diff : moves += (26 - diff);
    }
    cout << moves;
}