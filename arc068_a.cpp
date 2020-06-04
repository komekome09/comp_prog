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
    ll x; cin >> x;
    ll e = x%11, ee = x/11;
    if(1 <= x && x <= 6) cout << 1 << endl;
    else if(7 <= x && x <= 11) cout << 2 << endl;
    else{
        if(1 <= e && e <= 6) cout << ee*2+1 << endl;
        else if(7 <= e && e <= 10) cout << ee*2+2 << endl;
        else cout << ee*2 << endl;
    }
    //cout << ee << " " << e << endl;
    return 0;
}