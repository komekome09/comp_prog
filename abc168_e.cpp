#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);
const ll mod = 1000000007;


ll gcd(ll a, ll b){
    a = abs(a), b = abs(b);
    if(b == 0) return a;
    ll aa = a, bb = b;
    if(aa > bb){
        ll temp = aa;
        aa = bb;
        bb = temp;
    }

    while(bb != 0){
        ll temp = bb;
        bb = aa%bb;
        aa = temp;
    }
    return aa;
}

ll modpow(ll base, ll t){
    ll ret = 1;
    if(t == 0) return 1LL;
    rep(i, t){
        ret = (ret * base) % mod;
    }
    return ret;
}

int main(){
    ll n;
    cin >> n;
    map<pair<ll, ll>, pair<ll, ll>> ab;
    ll zero = 0;
    rep(i, n){
        ll a, b, c;
        cin >> a >> b;
        if(a == 0 && b == 0){
            zero++;
            continue;
        }
        ll abg = gcd(a, b);
        a /= abg, b /= abg;
        //cout << abg << endl;
        if(b < 0) a = -a, b = -b;
        if(b == 0 && a < 0) a = -a, b = -b;
        if(a <= 0){
            ll temp = a;
            a = b;
            b = -temp;
            ab[{a,b}].second++;
        }else{
            ab[{a,b}].first++;
        }
    }
    ll ans = 1;
    for(auto i : ab){
        ll tmp = 1;
        tmp += (modpow(2, i.second.first) - 1)%mod;
        tmp += (modpow(2, i.second.second) - 1)%mod;
        //cout << i.second.first << " " << modpow(2, i.second.first) << " " << i.second.second << " " << modpow(2, i.second.second) << endl;
        ans = (ans * tmp)%mod;
    }
    if(ans == 0) ans = mod - 1;
    else ans -= 1;
    if(ans + zero >= mod) ans = ans + zero - mod;
    else ans += zero;
    cout << ans << endl;
    return 0;
}