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
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll combn = a[n-1]+1, combr = 1000000009, c = combn/2, ind = -1;
    rep(i, n-1) b[i] = abs(a[i] - c);
    rep(i, n-1){
        if(b[i] < combr){
            ind = i;
            combr = b[i];
        }
    }
    cout << combn-1 << " " << a[ind] << endl;
    return 0;
}