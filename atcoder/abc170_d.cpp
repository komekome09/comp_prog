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
    vector<ll> a(n);
    rep(i, n){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll cnt = 0, m = a[a.size()-1];
    vector<ll> aaa(m+1, 0);
    for(ll i = 0; i < a.size(); ++i){
        aaa[a[i]]++;
        if(aaa[a[i]] == 1){
            for(ll j = 2; j*a[i] <= m; j++){
                aaa[j*a[i]]++;
            }
        }
    }
    //for(auto i : a) printf("%lld ", i); cout << "\n";
    //for(auto i : a) printf("%s ", aaa[i] ? "TRUE" : "FALSE"); cout << "\n";
    rep(i, a.size()){
        if(aaa[a[i]] == 1) cnt++;
    }
    cout << cnt << endl;
    return 0;
}