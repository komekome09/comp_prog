#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);


int main(){
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> l(n+1, vector<ll>());
    rep(i, m){
        ll a, b;
        cin >> a >> b;
        l[a].push_back(b);
        l[b].push_back(a);
    }

    vector<ll> dist(n+1, -1);
    vector<ll> sirube(n+1, -1);
    queue<ll> que;

    dist[1] = 0;
    que.push(1);

    while(!que.empty()){
        ll v = que.front();
        que.pop();

        for(auto nv : l[v]){
            if(dist[nv] != -1) continue;
            dist[nv] = dist[v]++;
            sirube[nv] = v;
            que.push(nv);
        }
    }

    bool z = true;
    rep(i, n+1){
        if(i == 0 || i == 1) continue;
        if(sirube[i] == -1){
            z = false;
            break;
        }
    }
    if(z){
        cout << "Yes" << endl;
        rep(i, n+1){
            if(i == 0 || i == 1) continue;
            cout << sirube[i] << endl;
        }
    }else{
        cout << "No" << endl;
    }
    return 0;
}