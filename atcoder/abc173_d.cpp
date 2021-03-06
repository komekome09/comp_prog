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
    ll n; cin >> n;
    vector<ll> a(n); cin >> a;
    sort(a.rbegin(), a.rend());
    ll sum = 0, index = 0;
    rep(i, n){
        if(i == 0){
            continue;
        }else{
            sum += a[i/2];
        }
    }
    cout << sum << endl;
    return 0;
}