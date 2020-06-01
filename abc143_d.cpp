#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n; cin >> n;
    vector<ll> l(n);
    rep(i, n) cin >> l[i];
    sort(l.rbegin(), l.rend());
    ll cnt = 0;
    rep(i, n){
        for(ll j = i+1; j < n; ++j){
            ll a1 = l[i] - l[j], a2 = l[j] - l[i], a3 = l[i] + l[j];
            
            ll ok = j, ng = n;
            while(abs(ok - ng) > 1){
                ll mid = (ok+ng) / 2;
                if(a1 < l[mid] && a2 < l[mid] && l[mid] < a3) ok = mid;
                else ng = mid;
            }
            cnt += ok - j;
        }
    }
    cout << cnt << endl;
    return 0;
}