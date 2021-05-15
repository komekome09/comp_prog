#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n, x, y;
    cin >> n >> x >> y;
    ll field[401][401];
    fill(field[0], field[401], 0);
    rep(i, n){
        ll xx, yy;
        cin >> xx >> yy;
        field[yy+200][xx+200] = -1;
    }

    ll dx[] =  {  1,  0, -1,  1, -1,  0},
        dy[] = {  1,  1,  1,  0,  0, -1};
    queue<pair<ll, ll>> q;
    q.emplace(200, 200);
    while(!q.empty()){
        ll py = q.front().first, px = q.front().second;
        q.pop();
        rep(i, 6){
            ll xx = px + dx[i], yy = py + dy[i];
            if(xx < 0 || xx >= 400) continue;
            if(yy < 0 || yy >= 400) continue;
            if(field[yy][xx] != 0) continue;
            field[yy][xx] = field[py][px] + 1;
            q.emplace(yy, xx);
        }
    }
    /*
    for(ll i = y-5; i <= y+5; ++i){
        for(ll j = x-5; j <= x+5; ++j){
            printf("%03lld|", field[i+200][j+200]);
        }
        cout << endl;
    }
    */
    if(field[y+200][x+200] == 0) cout << "-1" << endl;
    else cout << field[y+200][x+200] << endl;
    return 0;
}