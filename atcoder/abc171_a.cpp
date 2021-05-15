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
    char a; cin >> a;
    if('a' <= a && a <= 'z') cout << "a" << endl;
    else cout << "A" << endl;
    return 0;
}