#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> score(m+1, n);
    vector<vector<ll>> solve(n+1, vector<ll>());
    rep(i, q){
        ll qi, qn, qm;
        cin >> qi;
        if(qi == 1){
            cin >> qn;
            ll ans = 0;
            for(auto i : solve[qn]) ans += score[i];
            cout << ans << endl;
        }
        else{
            cin >> qn >> qm;
            solve[qn].push_back(qm);
            score[qm]--;
        }
    }
    return 0;
}