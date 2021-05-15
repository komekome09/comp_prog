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

ll digit(ll a){
    return to_string(a).length();
}

int main(){
    ll a, b, x;
    cin >> a >> b >> x;
    ll ok = 0, ng = (ll)1e9+1;
    //cout << ok << " " << ng << endl;
    while(abs(ok - ng) > 1){
        ll mid = (ok + ng) / 2;
        ll value = a * mid + b * digit(mid);
        if(value <= x) ok = mid;
        else ng = mid;
        //cout << ok << " " << ng << endl;
    }
    cout << ok << endl;
    return 0;
}