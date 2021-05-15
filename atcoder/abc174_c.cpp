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
    ll k; cin >> k;
    if(k%2 == 0 || k%5 == 0){
        cout << -1 << endl;
        return 0;
    }else{
        ll l = 0;
        if(k%7 == 0) l = k/7*9;
        else l = 9 * k;
        ll t = 10;
        for(ll i = 1; i <= l; ++i){
            if(t%l == 1){
                cout << i << endl;
                return 0;
            }
            t = t%l * 10;
        }
    }
    cout << -1 << endl;
    return 0;
}