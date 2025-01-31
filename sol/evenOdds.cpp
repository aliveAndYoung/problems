#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    long long n, k; // Use long long for n and k
    cin >> n >> k;
 
    // Calculate the number of odd numbers using integer division
    long long numOdds = (n + 1) / 2;
 
    if (k <= numOdds) {
        // k is in the odd part: 1, 3, 5, ...
        cout << ((k - 1) * 2) + 1;
    } else {
        // k is in the even part: 2, 4, 6, ...
        cout << ((k - numOdds) * 2);
    }
 
    return 0;
}