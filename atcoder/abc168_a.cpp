#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n;
    cin >> n;
    ll a = n%10;
    if(a == 2 || a == 4 || a == 5 || a == 7 || a == 9) cout << "hon" << endl;
    else if(a == 0 || a == 1 || a == 6 || a == 8) cout << "pon" << endl;
    else cout << "bon" << endl;
    return 0;
}