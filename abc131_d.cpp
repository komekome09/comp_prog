#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n;
    cin >> n;
    vector<pair<ll,ll>> ab(n);
    rep(i, n){
        ll a, b;
        cin >> a >> b;
        ab[i] = make_pair(b, a);
    }

    sort(ab.begin(), ab.end());
    bool z = true;
    ll sum = 0;
    rep(i, n){
        sum += ab[i].second;
        if(sum > ab[i].first) z = false;
        //cout << sum << " " << ab[i].first << endl;
    }
    if(z) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}