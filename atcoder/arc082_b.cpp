#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n;
    cin >> n;
    vector<ll> p(n), pi(n);
    rep(i, n){
        cin >> p[i];
        pi[i] = p[i] - (i+1);
    }
    ll cnt = 0;
    rep(i, n){
        if(pi[i] == 0){
            if(i != n-1){
                ll tmp = p[i+1];
                p[i+1] = p[i];
                pi[i+1] = p[i] - (i+2);
                p[i] = tmp;
                pi[i] = tmp - (i+1);
            }else{
                ll tmp = p[i-1];
                p[i-1] = p[i];
                pi[i-1] = p[i] - (i);
                p[i] = tmp;
                pi[i] = tmp - (i+1);
            }
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}