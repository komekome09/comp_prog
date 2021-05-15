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
    ll a, b, c, k; cin >> a >> b >> c >> k;
    rep(i, k){
        if(a >= b) b*= 2;
        else if(b >= c) c *= 2;
    }
    if(a < b && b < c) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}