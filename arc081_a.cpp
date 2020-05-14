#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n;
    cin >> n;
    map<ll, ll> l;
    rep(i, n){
        ll o;
        cin >> o;
        l[o]++;
    }
    
    ll a = 0, b = 0;
    for(auto i = l.rbegin(); i != l.rend(); ++i){
        //printf("%lld %lld\n", i->first, i->second);
        if(i->second/2 >= 1){
            if(i->second/2 >= 2){
                if(a == 0 && b == 0) a = b = i->first;
                else b = i->first;
            }else{
                if(a == 0) a = i->first;
                else b = i->first;
            }
            if(a != 0 && b != 0) break;
        }
    }
    
    ll ans  = a*b;
    cout << ans << endl;
    return 0;
}