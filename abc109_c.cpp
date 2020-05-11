#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n, x;
    cin >> n >> x;
    vector<ll> l1(n), l2(n);
    rep(i, n){
        cin >> l1[i];
        l2[i] = abs(l1[i] - x);
    }
    sort(l2.rbegin(), l2.rend());
    vector<ll> l3;
    for(ll i = 1; i*i <= l2[0]; ++i){
        if(l2[0]%i == 0){
            l3.push_back(i);
            if(i*i != l2[0]) l3.push_back(l2[0]/i);
        }
    }
    sort(l3.rbegin(), l3.rend());

    ll ans = 1;
    bool z = true;
    rep(i, l3.size()){
        z = true;
        rep(j, n){
            if(l2[j]%l3[i] != 0){
                z = false;
                break;
            }
        }
        if(z){
            ans = max(ans, l3[i]);
            break;
        }
    }
    cout << ans << endl;
    return 0;
}