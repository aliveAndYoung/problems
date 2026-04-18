// by LIFECOULDBEDREAM
// 2026/04/07 17:55

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;

    vector<ll> _v(n + 1);
    ll maxx = -0x7fffffff, minn = 0x7fffffff;
    for (ll i = 1; i <= n; i++)
    {
        cin >> _v[i];
        maxx = max(_v[i], maxx);
        minn = min(_v[i], minn);
    }

    ll l = 1, r = 1;
    ll flagS = -1, flagB = -1;
    ll ans = 0x7fffffff;
    for( ll i = 1  ; i <= n ;i++ ){
        if(_v[i] == maxx) flagB = i;
        if(_v[i] == minn) flagS = i;
        if(flagS != -1 && flagB != -1){
            ans = min(ans,  abs(flagB - flagS) );
        }
    }

    cout << ans << endl;

    return 0;
}
