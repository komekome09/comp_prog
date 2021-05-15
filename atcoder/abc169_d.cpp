#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n, m; cin >> n;
    map<ll, ll> b;
    vector<ll> a;
    m = n;
    for(ll i = 2; i * i <= n; ++i){
        if(n%i != 0) continue;
        ll ex = 1;
        while(n%i == 0){
            n /= i;
            ex *= i;
            a.push_back(ex);
        }
    }
    if(n != 1) a.push_back(n);
    
    sort(a.begin(), a.end());
    ll cnt = 0;
    for(auto i : a){
        if(m < i) break;
        if(m%i != 0) continue;
        m /= i;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}