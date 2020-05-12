#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll> l(m), l2(m-1);
    rep(i, m) cin >> l[i];
    sort(l.begin(), l.end());
    rep(i, m-1) l2[i] = l[i+1] - l[i];
    sort(l2.rbegin(), l2.rend());
    ll sum = 0;
    rep(i, m-1){
        if(i < n-1) continue;
        sum += l2[i];
    }
    cout << sum << endl;
    return 0;
}