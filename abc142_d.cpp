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

ll mincd(ll a){
    ll ans = 0;
    for(ll i = 1; i * i <= a; ++i){
        if(a%i == 0) ans = max(ans, i);
    }
    return ans;
}

int main(){
    ll a, b; cin >> a >> b;
    vector<ll> ap, bp, cp;
    for(ll i = 1; i * i <= a; ++i){
        if(a%i == 0){
            ap.push_back(i);
            if(i*i != a) ap.push_back(a/i);
        }
    }
    for(ll i = 1; i * i <= b; ++i){
        if(b%i == 0){
            bp.push_back(i);
            if(i*i != b) bp.push_back(b/i);
        }
    }
    sort(ap.begin(), ap.end());
    sort(bp.begin(), bp.end());
    set_intersection(ap.begin(), ap.end(), bp.begin(), bp.end(), inserter(cp, cp.end()));
    ll cnt = 0, m = cp[cp.size()-1];
    vector<bool> cpb(cp.size(), true);
    for(ll i = 0; cp[i] * cp[i] <= m; ++i){
        if(cp[i] == 1) continue;
        if(cpb[i]){
            for(ll j = i+1; j < cp.size(); ++j){
                if(cp[j]%cp[i] == 0) cpb[j] = false;
            }
        }
    }
    for(auto i : cpb) if(i) cnt++;
    cout << cnt << endl;
    return 0;
}