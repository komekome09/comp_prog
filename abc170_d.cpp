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

vector<ll> cd(ll a){
    vector<ll> hoge;
    for(ll i = 1; i * i <= a; ++i){
        if(a%i == 0){
            hoge.push_back(i);
            if(i*i != a) hoge.push_back(a/i);
        }
    }
    return hoge;
}

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    ll count[1000001] = {0};
    rep(i, n){
        cin >> a[i];
        count[a[i]]++;
    }
    sort(a.begin(), a.end());
    ll cnt = 0;
    if(a[0] == 1){
        if(count[a[0]] == 1) cout << 1 << endl;
        else cout << 0 << endl;
        return 0;
    }
    for(ll i = 0; i < a.size(); ++i){
        vector<ll> tmp = cd(a[i]);
        if(i == 0){
            if(count[a[i]] == 1) cnt++;
            continue;
        }
        bool z = true;
        for(ll j = 0; j < tmp.size(); ++j){
            ll ok = i-1, ng = -1;
            while(abs(ok - ng) > 1){
                ll mid = (ok + ng) / 2;
                if(a[mid] >= tmp[j]) ok = mid;
                else ng = mid;
            }
            
            if(a[ok] == tmp[j]){
                //cout << a[i] << " " << a[ok] << " " << tmp[j] << endl;
                z = false;
                break;
            }
        }
        if(z){
            if(count[a[i]] == 1) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}