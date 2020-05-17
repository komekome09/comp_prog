#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll k;
    string s;
    cin >> k >> s;
    if(s.size() > k){
        string ss = s.substr(0, k);
        cout << ss << "..." << endl;
    }else{
        cout << s << endl;
    }
    return 0;
}