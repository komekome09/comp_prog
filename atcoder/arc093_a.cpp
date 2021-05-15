#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n;
    cin >> n;
    vector<ll> a1(n+1), a2(n+1);
    rep(i, n){
        cin >> a1[i];
        if(i > 0) a2[i] = abs(a1[i-1] - a1[i]);
        else a2[i] = abs(0 - a1[i]);
    }
    a1[n] = 0;
    a2[n] = abs(a1[n-1] - a1[n]);
    ll sum = accumulate(a2.begin(), a2.end(), 0LL);
    rep(i, n){
        ll d = 0;
        if(i == 0){
            d = sum - a2[i] - a2[i+1] + abs(0 - a1[i+1]);
        }else{
            d = sum - a2[i] - a2[i+1] + abs(a1[i-1] - a1[i+1]);
        }
        cout << d << endl;
    }
    return 0;
}