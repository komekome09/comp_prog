#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    if(m < 2*n){
        ans += m/2;
    }else if(m == 2*n){
        ans += n;
    }else{
        ans += n + (m - 2*n)/4;
    }
    cout << ans << endl;
    return 0;
}