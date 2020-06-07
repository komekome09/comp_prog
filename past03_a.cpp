#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    string s, t;
    cin >> s >> t;
    string su, tu;
    su.resize(s.size());
    tu.resize(t.size());
    transform(s.cbegin(), s.cend(), su.begin(), ::toupper);
    transform(t.cbegin(), t.cend(), tu.begin(), ::toupper);
    if(s == t){
        cout << "same" << endl;
    }else if(su == tu){
        cout << "case-insensitive" << endl;
    }else{
        cout << "different" << endl;
    }
    return 0;
}