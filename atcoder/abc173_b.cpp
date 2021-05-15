#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

template<typename T>
istream& operator>> (istream& is, vector<T> &vec){
    for(T& x: vec) is >> x;
    return is;
}

int main(){
    ll n; cin >> n;
    ll ac = 0, wa = 0, tle = 0, re = 0;
    rep(i,n){
        string s; cin >> s;
        if(s == "AC") ac++;
        if(s == "WA") wa++;
        if(s == "TLE") tle++;
        if(s == "RE") re++;
    }
    printf("AC x %lld\n", ac);
    printf("WA x %lld\n", wa);
    printf("TLE x %lld\n", tle);
    printf("RE x %lld\n", re);
    return 0;
}