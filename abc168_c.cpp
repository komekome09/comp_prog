#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll a, b, h, m;
    cin >> a >> b >> h >> m;
    double ra = 2*PI*a, rb = a*PI*b;
    double pa = 2 * PI * (60 * h + m) / (12 * 60) , pb = 2 * PI * m / 60, p = abs(pa - pb);
    double ans = sqrt(pow(a, 2) + pow(b, 2) - 2* a*b*cos(p));
    printf("%.9f\n", ans);
    return 0;
}