#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n;
    cin >> n;
    vector<string> w(n);
    rep(i, n){
        cin >> w[i];
        reverse(w[i].begin(), w[i].end());
    }
    string s = "";
    for(ll i = 0, j = n-1; i < n; ++i, --j){
        bool z = false;
        rep(k, n){
            rep(l, n){
                if(w[i][k] == w[j][l]){
                    s += w[i][k];
                    z = true;
                    break;
                }
            }
            if(z) break;
        }
        if(!z){
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << s << endl;
    return 0;
}