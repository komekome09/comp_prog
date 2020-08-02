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
    ll n, d; cin >> n >> d;
    vector<ll> x(n), y(n);
    ll cnt = 0;
    rep(i, n){
        cin >> x[i] >> y[i];
        double dis = sqrt(x[i]*x[i]+y[i]*y[i]);
        if(dis <= d) cnt++;
    }
    cout << cnt << endl;
    return 0;
}