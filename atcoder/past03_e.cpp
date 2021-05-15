#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n, m, q;
    cin >> n >> m >> q;
    vector<vector<ll>> g(n+1, vector<ll>());
    vector<ll> color(n+1);
    rep(i, m){
        ll v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    for(ll i = 1; i <= n; ++i) cin >> color[i];
    rep(i, q){
        ll s1, s2, s3;
        cin >> s1 >> s2;
        if(s1 == 1){
            cout << color[s2] << endl;
            for(auto i : g[s2]) color[i] = color[s2];
        }else{
            cout << color[s2] << endl;
            cin >> s3;
            color[s2] = s3;
        }
    }
    return 0;
}