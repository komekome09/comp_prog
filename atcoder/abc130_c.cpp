#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll w, h, x, y;
    cin >> w >> h >> x >> y;
    ll d = 0;
    if(w/2.0 == x && h/2.0 == y) d = 1;
    printf("%.9lf %lld\n", w*h/2.0, d);
    return 0;
}