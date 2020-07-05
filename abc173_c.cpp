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
    ll h, w, k; cin >> h >> w >> k;
    vector<vector<char>> field(h, vector<char>(w));
    rep(i, h) rep(j, w) cin >> field[i][j];
    ll ans = 0;
    rep(i, pow(2, h)){
        rep(j, pow(2, w)){
            ll black = 0;
            vector<ll> lh, lw;
            rep(l, h) if(i & (1 << l)) lh.push_back(l);
            rep(l, w) if(j & (1 << l)) lw.push_back(l);
            rep(a, h){
                rep(b, w){
                    if(find(lh.begin(), lh.end(), a) != lh.end()) continue;
                    if(find(lw.begin(), lw.end(), b) != lw.end()) continue;
                    if(field[a][b] == '#') black++;
                }
            }
            if(black == k) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}