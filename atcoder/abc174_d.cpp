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
    ll n;
    string s;
    cin >> n >> s;
    ll white = 0, red = 0;
    rep(i, n){
        if(s[i] == 'W') white++;
        else red++;
    }
    if(white == 0 || red == 0){
        cout << 0 << endl;
        return 0;
    }
    ll ans = 0;
    rep(i, n){
        if(i >= red && s[i] == 'R') ans++;
    }
    cout << ans << endl;
    return 0;
}