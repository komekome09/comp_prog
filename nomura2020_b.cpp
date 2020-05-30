#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    string s; cin >> s;
    bool p = true;
    rep(i, s.length()){
        if(s[i] == '?') s[i] = 'D';
    }
    cout << s << endl;
    return 0;
}