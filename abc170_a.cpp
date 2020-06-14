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
    vector<ll> x(5);
    rep(i, 5) cin >> x[i];
    for(ll i = 0; i < x.size(); ++i){
        if(x[i] == 0){
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}