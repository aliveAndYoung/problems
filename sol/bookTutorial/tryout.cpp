#include <bits/stdc++.h>
using namespace std;

string to_string(__int128_t num)
{
    if (num == 0)
        return "0";
    bool negative = false;
    if (num < 0)
    {
        negative = true;
        num = -num;
    }
    string s;
    while (num > 0)
    {
        s += '0' + (num % 10);
        num /= 10;
    }
    if (negative)
        s += '-';
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
}
// // Basic arithmetic
// __int128_t a = 1e37;
// __int128_t b = 2e37;
// cout << "Addition: " << to_string(a + b) << "\n";
// cout << "Subtraction: " << to_string(b - a) << "\n";
// cout << "Multiplication: " << to_string(a * 2) << "\n";
// cout << "Division: " << to_string(b / 2) << "\n";

// // Comparison
// cout << "Is a < b? " << (a < b) << "\n";
// cout << "Is a == b? " << (a == b) << "\n";

// // Bitwise operations
// __int128_t c = 0b1010;  // binary 10
// __int128_t d = 0b1100;  // binary 12
// cout << "Bitwise AND: " << to_string(c & d) << "\n";  // Should be 8 (0b1000)
// cout << "Bitwise OR: " << to_string(c | d) << "\n";   // Should be 14 (0b1110)

// // Increment/Decrement
// __int128_t e = 100;
// e++;
// cout << "After increment: " << to_string(e) << "\n";
// e--;
// cout << "After decrement: " << to_string(e) << "\n";