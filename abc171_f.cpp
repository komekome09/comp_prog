#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

const ll mod = 1000000007;

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

const ll MAX = 2000005;
ll fact[MAX], ifact[MAX];

ll power(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

ll comb(ll n, ll r){
    return (fact[n] * ifact[r]) % mod * ifact[n-r] % mod;
}

int main(){
    ll k; string s;
    cin >> k >> s;
    
    ll n = s.size();
    fact[0] = 1;
    rep(i, n+k) fact[i+1] = fact[i]*(i+1)%mod;
    ifact[n+k] = power(fact[n+k], mod-2);
    for(ll i = n+k-1; i >= 0; --i) ifact[i] = ifact[i+1]*(i+1)%mod;
    
    mint sum(0);
    for(ll i = 0; i <= k; ++i){
        mint tmp(0);
        tmp += mint(25).modpow(i);
        tmp *= comb(i + n-1, n-1);
        tmp *= mint(26).modpow(k-i);
        sum += tmp;
    }
    cout << sum << endl;
    return 0;
}