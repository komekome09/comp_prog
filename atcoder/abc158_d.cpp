#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    string s;
    ll q;
    cin >> s >> q;
    ll rev_cnt = 0;
    string pre = "", suf = "";
    rep(i, q){
        ll t, f;
        char c;
        cin >> t;
        if(t == 1) rev_cnt++;
        else{
            cin >> f >> c;
            if(rev_cnt%2){
                if(f == 1) suf += c;
                else pre += c;
            }else{
                if(f == 1) pre += c;
                else suf += c;
            }
        }
    }
    if(rev_cnt%2 == 0){
        reverse(pre.begin(), pre.end());
        cout << pre << s << suf << endl;
    }else{
        reverse(suf.begin(), suf.end());
        reverse(s.begin(), s.end());
        cout << suf << s << pre << endl;
    }
    return 0;
}