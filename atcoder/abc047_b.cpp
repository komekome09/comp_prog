#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){ 
    ll w, h, n;
    cin >> w >> h >> n;
    ll w1 = 0, w2 = w, h1 = 0, h2 = h;
    rep(i, n){
        ll x, y, a;
        cin >> x >> y >> a;

        if(a == 1) w1 = max(w1, x);
        else if(a == 2) w2  = min(w2, x);
        else if(a == 3) h1 = max(h1, y);
        else h2 = min(h2, y);
    }
    if(w1 >= w2 || h1 >= h2) cout << 0 << endl;
    else{
        ll ans = (w2-w1)*(h2-h1);
        cout << ans << endl;
    }
    return 0;
}