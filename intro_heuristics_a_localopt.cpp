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

const ll mod = 1000000007;
const ll contest = 26;

int main(){
    ll d; cin >> d;
    vector<ll> c(contest);
    vector<vector<ll>> s(d, vector<ll>(contest));
    rep(i, contest) cin >> c[i];
    rep(i, d) rep(j, contest) cin >> s[i][j];
    vector<ll> last(contest, 0);
    vector<ll> result(d, 0);
    ll sum = 0;
    rep(i, d){
        ll maxx = 0, tt = 1, score = 0;
        rep(t, contest){
            score = sum + s[i][t];
            rep(j, contest){
                if(t == j) continue;
                score -= c[j]*((i+1)-last[j]);
            }
            if(score > maxx){
                tt = t;
                maxx = score;
            }
        }
        last[tt] = i+1;
        result[i] = tt;
        sum += maxx % mod;
        //cout << tt+1 << endl;
    }

    fill(last.begin(), last.end(), 0);
    sum = 0;
    rep(i, d){
        sum += s[i][result[i]];
        last[result[i]] = i+1;
        rep(j, contest){
            if(result[i] == j) continue;
            sum -= c[j]*((i+1)-last[j]);
        }
    }
    
    rep(a, d){
        rep(b, 100){
            random_device rd;
            mt19937 mt(rd());
            ll tt = a, cc = mt()%contest;
            double p = mt()%1000000/999999.0;
            ll bak = result[tt];
            result[tt] = cc;

            fill(last.begin(), last.end(), 0);
            ll old = sum;
            sum = 0;
            rep(i, d){
                sum += s[i][result[i]];
                last[result[i]] = i+1;
                rep(j, contest){
                    if(result[i] == j) continue;
                    sum -= c[j]*((i+1)-last[j]);
                }
            }
            if(sum < old){
                result[tt] = bak;
                sum = old;
            }
        }
    }
    for(auto i : result){
        cout << i+1 << endl;
    }
    return 0;
}