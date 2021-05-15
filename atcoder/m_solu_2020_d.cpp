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
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll money = 1000;
    rep(i, n-1){
        if(a[i] < a[i+1]) money = money/a[i]*a[i+1] + money%a[i];
        //cout << money << endl;
    }

    cout << money << endl;
    return 0;
}