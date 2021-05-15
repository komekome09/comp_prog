#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.rbegin(), a.rend());
    ll ans = 1, max = 1000000000000000000, prev = 1;
    if(a[n-1] == 0){
        cout << 0 << endl;
        return 0;
    }
    rep(i, n){
        ans *= a[i];
        if(ans > max || ans < prev){
            cout << -1 << endl;
            return 0;
        }
        prev  = ans;
    }
    cout << ans << endl;
    return 0;
}