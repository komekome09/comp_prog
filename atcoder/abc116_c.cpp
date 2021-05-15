#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n;
    cin >> n;
    vector<ll> l(n);
    rep(i, n){
        cin >> l[i];
    }
    ll cnt = 0;
    while(accumulate(l.begin(), l.end(), 0LL) != 0){
        bool z = false;
        rep(i, n){
            if(l[i] == 0){
                if(z){
                    cnt++;
                    z = false;
                }
            }else{
                l[i]--;
                z = true;
            }
        }
        if(z) cnt++;
    }
    cout << cnt << endl;
    return 0;
}