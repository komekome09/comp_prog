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

ll digit(ll n){
    ll d = 0;
    while(n != 0){
        d++;
        n /= 10;
    }
    return d;
}

int main(){
    ll n, ans = 9999; cin >> n;
    for(ll i = 1; i * i <= n; ++i){
        if(n%i != 0) continue;
        ll ii = n/i;
        ans = min(ans, max(digit(i), digit(ii)));
    }
    cout << ans << endl;
    return 0;
}