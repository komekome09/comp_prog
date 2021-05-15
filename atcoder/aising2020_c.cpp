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
    ll lists[101][101][101];
    fill(lists[0][0], lists[101][0], -1);
    vector<ll> cnt(60001, 0);
    rep(i, 100){
        rep(j, 100){
            rep(k, 100){
                if(lists[i][j][k] != -1){
                    cnt[lists[i][j][k]]++;
                    continue;
                }                
                ll tmp = pow(i+1, 2) + pow(j+1,2) + pow(k+1,2) + (i+1)*(j+1) + (j+1)*(k+1) + (k+1)*(i+1);
                lists[i][j][k] = tmp;
                lists[i][k][j] = tmp;
                lists[j][i][k] = tmp;
                lists[j][k][i] = tmp;
                lists[k][i][j] = tmp;
                lists[k][j][i] = tmp;

                cnt[tmp]++;
            }
        }
    }
    rep(i, n){
        cout << cnt[i+1] << endl;
    }
    return 0;
}