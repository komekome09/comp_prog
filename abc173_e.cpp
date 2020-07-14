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
//const ll mod = 998244353;

template<int MOD> class Fp {
    ll val;
public:
    constexpr Fp(ll v = 0) noexcept : val(v % MOD) {
        if(val < 0) val += MOD;
    }
    constexpr int getmod() { return MOD; }
    constexpr Fp operator- () const noexcept { return val ? MOD - val : 0; }
    constexpr Fp operator+ (const Fp& r) const noexcept { return Fp(*this) += r; }
    constexpr Fp operator- (const Fp& r) const noexcept { return Fp(*this) -= r; }
    constexpr Fp operator* (const Fp& r) const noexcept { return Fp(*this) *= r; }
    constexpr Fp operator/ (const Fp& r) const noexcept { return Fp(*this) /= r; }
    constexpr Fp& operator+= (const Fp& r) noexcept {
        val += r.val;
        if(val >= MOD) val -= MOD;
        return *this;
    }
    constexpr Fp& operator-= (const Fp& r) noexcept {
        val -= r.val;
        if(val < 0) val += MOD;
        return *this;
    }
    constexpr Fp& operator*= (const Fp& r) noexcept {
        (val *= r.val) %= MOD;
        return *this;
    }
    constexpr Fp& operator/= (const Fp& r) noexcept {
        ll a = r.val, b = MOD, u = 1, v = 0;
        while(b){
            ll t = a/b;
            a -= t*b; swap(a, b);
            u -= t*v; swap(u, v);
        }
        (val *= u) %= MOD;
        if(val < 0) val += MOD;
        return *this;
    }
    constexpr bool operator== (const Fp& r) const noexcept {
        return this->val == r.val;
    }
    constexpr bool operator!= (const Fp& r) const noexcept {
        return this->val != r.val;
    }
    constexpr bool operator> (const Fp& r) const noexcept {
        return this->val > r.val;
    }
    constexpr bool operator< (const Fp& r) const noexcept {
        return this->val < r.val;
    }
    friend constexpr ostream& operator<< (ostream &os, const Fp<MOD>& x){
        ll tmp = x.val;
        os << tmp;
        return os;
    }
    friend constexpr istream& operator>> (istream &is, const Fp<MOD>& x){
        ll tmp;
        is >> tmp;
        x = Fp<MOD>(tmp);
        return is;
    }
    constexpr Fp<MOD> modpow(ll n) noexcept {
        if(n == 0) return 1;
        auto t = modpow(n>>1);
        t *= t;
        if(n & 1) t *= *this;
        return t;
    }
};
using mint = Fp<mod>;

int main(){
    ll n, k; cin >> n >> k;
    vector<ll> p, m, b(n);
    rep(i, n){
        cin >> b[i];
        if(b[i] < 0) m.push_back(b[i]);
        if(b[i] >= 0) p.push_back(b[i]);
    }
    sort(m.begin(), m.end());
    sort(p.rbegin(), p.rend());
    ll indp = 0, indm = 0;
    mint ans(1);
    if(k == n){
        rep(i, n) ans *= b[i];
        cout << ans << endl;
        return 0;
    }
    if(p.size() == 0 && k%2 == 1){
        rep(i, k) ans *= m[m.size()-1-i];
        cout << ans << endl;
        return 0;
    }
    for(ll i = 0; i < k; ++i){
        if(i == k-1){
            ans *= p[indp];
            continue;
        }
        ll plus = -1, minus = -1;
        if(indp < p.size()){
            plus = p[indp];
            if(indp+1 < p.size()){
                plus *= p[indp+1];
            }
        }
        if(indm < m.size()){
            minus = m[indm];
            if(indm+1 < m.size()){
                minus *= m[indm+1];
            }
        }
        if(minus > plus){
            ans *= minus;
            i++;
            indm += 2;
        }else{
            ans *= p[indp];
            indp++;
        }
        //cout << plus << " " << minus << endl;
    }
    cout << ans << endl;
    return 0;
}