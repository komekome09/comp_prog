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

ll popc[200001] = {-1};
ll popc_calc(ll n, ll pop){
    if(popc[n] != -1) return popc[n];

}

int main(){
    ll n; string s; cin >> n >> s;
    ll cnt = 0;
    rep(i, n) if(s[i] == '1') cnt++;
    map<ll, string> cnts;
    rep(i, 2){
        ll tmp = cnt + (i==0 ? 1 : -1);
        while(tmp != 0){
            cnts[tmp] += (tmp%2) + '0';
            tmp /= 2;
        }
        reverse(cnts[tmp].begin(), cnts[tmp].end());
    }
    rep(i, n){
        string tmp = s;
        ll c = cnt;
        if(tmp[i] == 0) c++;
        else c--;
    }
    
    return 0;
}