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
    ll n; cin >> n;
    string s = "";
    while(n != 0){
        s += (n-1)%26 + 'a';
        n--;
        n /= 26;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}