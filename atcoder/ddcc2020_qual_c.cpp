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

char field[300][300];
ll flist[300][300];

int main(){
    ll h, w, k; cin >> h >> w >> k;
    rep(i, h) rep(j, w) cin >> field[i][j];
    fill(flist[0], flist[100], 0);
    ll cnt = 0;
    rep(i, h){
        rep(j, w){
            if(field[i][j] == '#'){
                cnt++;
                flist[i][j] = cnt;
                continue;
            }
            if(j != 0 && flist[i][j-1] != 0) flist[i][j] = flist[i][j-1];
        }
        for(ll j = w-1; j >= 0; --j){
            if(j != w-1 && flist[i][j] == 0 && flist[i][j+1] != 0) {
                flist[i][j] = flist[i][j+1];
            }
        }
    }
    rep(j, w){
        rep(i, h){
            if(i != 0 && flist[i][j] == 0 && flist[i-1][j] != 0){
                flist[i][j] = flist[i-1][j];
            }
        }
        for(ll i = h-1; i >= 0; --i){
            if(i != h-1 && flist[i][j] == 0 && flist[i+1][j] != 0){
                flist[i][j] = flist[i+1][j];
            }
        }
    }
    rep(i, h){
        rep(j, w){
            if(j > 0) cout << " ";
            cout << flist[i][j];
        }
        cout << endl;
    }
    return 0;
}