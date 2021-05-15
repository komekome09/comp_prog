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
    ll h, w; cin >> h >> w;
    vector<vector<ll>> field(20, vector<ll>(20, -1));
    rep(i, h){
        rep(j, w){
            char tmp; cin >> tmp;
            if(tmp == '.') field[i][j] = 0;
        }
    }

    ll ans = -1;
    rep(i, h){
        rep(j, w){
            if(field[i][j] == -1) continue;
            vector<vector<ll>> tmp = field;
            queue<pair<ll,ll>> que;
            que.emplace(i, j);

            while(!que.empty()){
                ll x = que.front().second, y = que.front().first;
                que.pop();

                ll dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
                rep(k, 4){
                    ll nx = x + dx[k], ny = y + dy[k];
                    if(nx < 0 || nx >= w || ny < 0 || ny >= h || tmp[ny][nx] != 0 || (ny == i && nx == j)) continue;
                    tmp[ny][nx] = tmp[y][x] + 1;
                    que.emplace(ny, nx);
                }
                //cout << que.front().second << " " << que.front().first << endl;
            }

            rep(k, h) ans = max(ans, *max_element(tmp[k].begin(), tmp[k].end()));
        }
    }
    cout << ans << endl;
    return 0;
}