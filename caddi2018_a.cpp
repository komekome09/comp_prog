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
    ll n, p;
    cin >> n >> p;
    ll m = 0;
    if(n == 1){
        m = p;
    }else{
        for(ll i = 1; pow(i, n) <= p; ++i){
            if(p%(ll)pow(i, n) == 0) m = max(m, i);
        }
    }
    cout << m << endl;
    return 0;
}