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

ll contest = 26;

int main(){
    ll d; cin >> d;
    vector<ll> c(contest), t(d);
    vector<vector<ll>> s(d, vector<ll>(contest));
    rep(i, contest) cin >> c[i];
    rep(i, d) rep(j, contest) cin >> s[i][j];
    rep(i, d) cin >> t[i];
    ll v = 0;
    vector<ll> last(contest, 0);
    rep(i, d){
        v += s[i][t[i]-1];
        last[t[i]-1] = i+1;
        rep(j, contest){
            if(t[i]-1 == j) continue;
            v -= c[j]*((i+1)-last[j]);
        }
        cout << v << endl;
    }
    return 0;
}