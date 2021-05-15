#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n;
    cin >> n;
    vector<string> s(n);
    map<string, ll> t;
    rep(i, n){
        string ss;
        cin >> ss;
        sort(ss.begin(), ss.end());
        t[ss]++;
    }
    ll ans = 0;
    for(auto i : t){
        if(i.second == 1) continue;
        ans += i.second*(i.second - 1)/2;
    }
    cout << ans << endl;
    
    return 0;
}