#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll a; string b; cin >> a >> b;
    ll c = (b[0] - '0')*100 + (b[2] - '0')*10 + (b[3] - '0');
    cout << a * c / 100 << endl;
    return 0;
}