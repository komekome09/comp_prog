#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n;
    cin >> n;
    vector<ll> l, r;
    rep(i, n){
        ll a;
        cin >> a;
        if(i%2==0) r.push_back(a);
        else l.push_back(a); 
    }
    reverse(l.begin(), l.end());
    copy(r.begin(), r.end(), back_inserter(l));
    if(n%2 == 1) reverse(l.begin(), l.end());
    
    rep(i, l.size()){
        if(0 < i) cout << " ";
        cout << l[i];
    }
    cout << endl;
    return 0;
}