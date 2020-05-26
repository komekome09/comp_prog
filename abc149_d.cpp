#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n, k, r, s, p;
    string t;
    cin >> n >> k >> r >> s >> p >> t; 
    map<char, ll> score;
    score['r'] = r;
    score['s'] = s;
    score['p'] = p;
    string win = "";
    rep(i, n){
        if(t[i] == 'r'){ win += 'p'; }
        else if(t[i] == 's'){ win += 'r'; }
        else { win += 's'; }
    }
    ll ans = 0;
    rep(i, n){
        if(i - k >= 0 && t[i] == t[i-k]){
            t[i] = ' ';
        }else{
            ans += score[win[i]];
        }
    }
    cout << ans << endl;
    return 0;
}