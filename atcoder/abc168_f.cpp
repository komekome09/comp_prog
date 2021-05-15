#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n, m;
    cin >> n >> m;
    vector<tuple<ll, ll, ll>> segh, segv;
    map<ll, ll> zipx, zipy;
    zipx[0] = 0;
    zipy[0] = 0;
    rep(i, n){
        ll a, b, c;
        cin >> a >> b >> c;
        zipx[a] = 0;
        zipx[b] = 0;
        zipy[c] = 0;
        segh.emplace_back(a, b, c);
    }
    rep(i, m){
        ll a, b, c;
        cin >> a >> b >> c;
        zipx[a] = 0;
        zipy[b] = 0;
        zipy[c] = 0;
        segv.emplace_back(b, c, a);
    }
    vector<ll> xs, ys;
    for(auto& i : zipx){
        i.second = xs.size();
        xs.push_back(i.first);
    }
    for(auto& i : zipy){
        i.second = ys.size();
        ys.push_back(i.first);
    }
    
    ll h = xs.size()*2;
    ll w = ys.size()*2;
    vector<vector<ll>> field(h, vector<ll>(w));
    rep(i, n){
        ll a = zipx[get<0>(segh[i])]*2;
        ll b = zipx[get<1>(segh[i])]*2;
        ll c = zipy[get<2>(segh[i])]*2;
        for(ll j = a; j <= b; j++) field[j][c] = -1;
    }
    rep(i, m){
        ll a = zipy[get<0>(segv[i])]*2;
        ll b = zipy[get<1>(segv[i])]*2;
        ll c = zipx[get<2>(segv[i])]*2;
        for(ll j = a; j <= b; j++) field[c][j] = -1;
    }

    queue<pair<ll,ll>> q;
    ll sx = zipx[0]*2, sy = zipy[0]*2;
    field[sx][sy] = 1;
    q.emplace(sx,sy);
    ll dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};
    while(!q.empty()){
        ll x = q.front().first, y = q.front().second;
        q.pop();
        rep(i, 4){
            ll xx = x + dx[i], yy = y + dy[i];
            if(xx < 0 || xx >= h) continue;
            if(yy < 0 || yy >= w) continue;
            if(field[xx][yy] != 0) continue;
            field[xx][yy] = 1;
            q.emplace(xx,yy);
        }
    }
    ll ans = 0;
    rep(x, h){
        rep(y, w){
            if(field[x][y] != 1) continue;
            if(x == 0 || x == h-1 || y == 0 || y == w-1){
                cout << "INF" << endl;
                return 0;
            }
            if(x%2 == 0 || y%2 == 0) continue;
            ll xx = xs[x/2+1] - xs[x/2], yy = ys[y/2+1] - ys[y/2];
            ans += xx * yy;
        }
    }
    cout << ans << endl;
    return 0;
}