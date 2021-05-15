#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

template<typename T>
istream& operator>> (istream& is, vector<T> &vec){
    for(T& x: vec) is >> x;
    return is;
}

int main(){
    ll l, r, d; cin >> l >> r >> d;
    ll ans = (r/d) - ((l-1)/d);
    cout << ans << endl;
    return 0;
}