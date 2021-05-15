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
    ll h, w, n;
    cin >> h >> w >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> s;
    rep(i, n){
        rep(j, a[i]){
            s.push_back(i+1);
        }
    }
    rep(i, h){
        string tmp = "";
        for(ll j = i*w; j < (i+1)*w; ++j){
            if(j > i*w) tmp += " ";
            tmp += to_string(s[j]);
        }
        cout << tmp << endl;

        ++i;
        if(i == h) break;
        
        tmp = "";
        for(ll j = (i+1)*w-1; j >= i*w; --j){
            if(j < (i+1)*w-1) tmp += " ";
            tmp += to_string(s[j]);
        }
        cout << tmp << endl;
    }
    return 0;
}