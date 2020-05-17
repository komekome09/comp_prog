#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n;
    cin >> n;
    vector<double> ab(n+1), ba(n+1);
    rep(i, n){
        ll a, b;
        cin >> a >> b;
        ab[i] = a/(double)b;
        ba[i] = b/(double)a;
    }
    return 0;
}