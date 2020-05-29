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
    constexpr Fp operator-- (const Fp& r) const noexcept { return Fp(*this) -= 1; }
    constexpr Fp operator++ (const Fp& r) const noexcept { return Fp(*this) += 1; }
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
    friend constexpr ostream& operator>> (istream &is, const Fp<MOD>& x){
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