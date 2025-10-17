#include <bits/stdc++.h>
using namespace std;

struct specialNumber {
    string num;
    
    // Proper comparison as strings to avoid integer overflow
    bool operator<(const specialNumber& other) const {
        return (num + other.num) > (other.num + num);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        
        vector<specialNumber> myNums(n);
        for (int i = 0; i < n; i++) {
            cin >> myNums[i].num;
        }

        sort(myNums.begin(), myNums.end());

        for (const auto& number : myNums) {
            cout << number.num;
        }
        cout << "\n";
    }
}