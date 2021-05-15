#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    string s;
    cin >> s;
    ll l[3] = {0}; // a, b, c
    rep(i, s.length()){
        l[s[i] - 'a' ]++;
    }
    ll mi = min(min(l[0], l[1]), l[2]);
    if(s.length() == 1) cout << "YES" << endl;
    else if(s.length() == 2){
        if(s[0] == s[1]) cout << "NO" << endl;
        else cout << "YES" << endl;
    }else if((s.length() - mi*3) > 2) cout << "NO" << endl;
    else{
        ll cnt = 0;
        rep(i, 3){
            l[i] -= mi;
            if(l[i] == 0) cnt++;
        }
        if(cnt == 1 || cnt == 0 || (s.length() - mi*3) == 1 || (s.length() - mi*3) == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}