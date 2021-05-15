#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

ll gcd(ll a, ll b){
    if(b == 0) return a;
    if(a < b){
        ll swap = a;
        a = b;
        b = swap;
    }

    while(b != 0){
        ll tmp = b;
        b = a%b;
        a = tmp;
    }

    return a;
}

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    vector<ll> ag(n);
    rep(i, n) ag[i] = gcd(a[i], a[0]);
    sort(ag.begin(), ag.end());
    cout << ag[0] << endl;
    return 0;
