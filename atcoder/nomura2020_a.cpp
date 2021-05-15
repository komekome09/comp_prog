#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll h1, m1, h2, m2, k;
    cin >> h1 >> m1 >> h2 >> m2 >> k;
    ll minute = (h2*60 + m2) - (h1*60 + m1);
    ll ans = minute - k;
    if(ans < 0) ans = 0;
    cout << ans << endl;
    return 0;
}