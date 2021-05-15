#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n; cin >> n;
    vector<ll> a(n+1);
    rep(i, n+1) cin >> a[i];
    
    if(n == 0){
        if(a[0] == 1) cout << 1 << endl;
        else cout << -1 << endl;
    }else{
        
    }
    return 0;
}