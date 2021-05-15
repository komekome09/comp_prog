#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    string sa, sb, sc;
    cin >> sa >> sb >> sc;
    map<char, queue<char>> s;
    rep(i, sa.length()) s['a'].push(sa[i]);
    rep(i, sb.length()) s['b'].push(sb[i]);
    rep(i, sc.length()) s['c'].push(sc[i]);
    char next = 'a', prev = 'a';
    while(true){
        if(s[next].size() == 0){
            cout << (char)toupper(next) << endl;
            return 0;
        }

        prev = next;
        next = s[next].front();
        s[prev].pop();
    }
    return 0;
}