#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> groups(n);
    vector<vector<ll>> prefix(n);
    for (int i = 0; i < n; i++){
        int m;
        cin >> m;
        groups[i].resize(m);
        prefix[i].resize(m + 1, 0);
        for (int j = 0; j < m; j++){
            cin >> groups[i][j];
        }
        sort(groups[i].begin(), groups[i].end());
        for (int j = 0; j < m; j++){
            prefix[i][j + 1] = prefix[i][j] + groups[i][j];
        }
    }
    int Q;
    cin >> Q;
    while(Q--){
        int q;
        cin >> q;
        int bestIdx = 0;
        ll bestVal = 0;
        for (int i = 0; i < n; i++){
            int m = groups[i].size();
            int pos = lower_bound(groups[i].begin(), groups[i].end(), q) - groups[i].begin();
            ll left = (ll)q * pos - prefix[i][pos];
            ll right = (prefix[i][m] - prefix[i][pos]) - (ll)q * (m - pos);
            ll total = left + right;
            if(i == 0 || total < bestVal){
                bestVal = total;
                bestIdx = i;
            }
        }
        cout << bestIdx + 1 << " ";
    }
    return 0;
}
