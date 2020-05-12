#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    string s;
    cin >> s;
    ll ans = 0;
    rep(i, s.length()){
        if(i == 0 || i == s.length()-1) ans += s.length()-1;
        else{
            if(s[i] == 'U'){
                ans += s.length() - 1 - i;
                ans += i * 2;
            }
            else{
                ans += (s.length() - 1 - i) * 2;
                ans += i;
            }
        }
    }
    cout << ans << endl;
    return 0;
}