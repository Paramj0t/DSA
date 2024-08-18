#include <bits/stdc++.h>

using namespace std;

// C i/o
#define si(n)	scanf("%d", &n)
#define sl(n)	scanf("%lld", &n)
#define sd(n)  scanf("%lf", &n)
#define ss(s)	scanf("%s", s)
#define ct(c)  cin.getline(c, n);
#define pi(n)	printf("%d", n)
#define pl(n)	printf("%lld", n)
#define ps(s)	printf("%s", s)
#define gc() getchar_unlocked()
#define pc(c) putc_unlocked(c, stdout) // this is same as putchar_unlocked()

// C++ i/o
#define strt(s) getline(cin, s)
#define st(n)  cin >> n
#define st2(x, y) cin >> x >> y
#define pt(x) cout << x
#define pt2(x, y) cout << x << ", " <<  y
#define lbr() cout << endl

// General
using ll = long long;
using db = long double; // or double, if TL is tight
// using str = string; // yay python!
#define ld(x) x % 10

// pairs
using pii = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;

// vectors
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<db>; 
using vs = vector<string>;
using vpi = vector< pii >;
using vpl = vector< pl >;
using vpd = vector< pd >;
using vpii = vector< pii >;
using vvi = vector< vi >;
using vvl = vector< vl >;

#define tcT template<class T
#define tcTU tcT, class U
// ^ lol this makes everything look weird but I'll try it
tcT> using V = vector<T>;
tcT, size_t SZ> using AR = array<T,SZ>;
tcT> using PR = pair<T,T>;

// pairs
#define mp make_pair
#define F first
#define S second

// arrays
#define ai(a, n) for(int i = 0; i < n; i++) { si(a[i]); }
#define aiai(a, n, m) for(int i = 0; i < n; i++) { for(int j = 0; j < m; j++) { si(a[i][j]); } }
// #define all(a) a.begin(), a.end() or as shown in vectors
#define clr(a) memset(a, 0, sizeof(a))

// vectors
// oops size(v), rbegin(v), rend(v) need C++17 using C++11 now can change in settings
#define sz(v) int((v).size())
#define bg(v) begin(v)
#define all(v) bg(v), end(v)
#define rall(v) v.rbegin(), v.rend()
#define sortalla(v) sort(all(v))
#define sortalld(v) sort(all(v), greater<int>());
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pb push_back
#define eb emplace_back
#define pf push_front
#define vi(v, n) int input; for(int i = 0; i < n; i++) { v.push_back(si(input)); }
#define vivi(v, n, m) int input; for(int i = 0; i < n; i++) { for(int j = 0; j < m; j++) { v.push_back(a[i][j]); } }

#define lb lower_bound
#define ub upper_bound
tcT> int lwb(V<T>& a, const T& b) { return int(lb(all(a),b)-bg(a)); }
tcT> int upb(V<T>& a, const T& b) { return int(ub(all(a),b)-bg(a)) - 1; }

// loops
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define ROF(i, b, a) for (int i = b; i >= a; i--)
#define fo(i, n) for(int i = 0; i < n; i++)
#define foRev(i, n) for(int i = n - 1; i >= 0; i--)
#define fofo(i, n, j, m) for(int i = 0; i < n; i++) { for(int j = 0; j < m; j++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define trav(a, x) for (auto& a: x)
#define qs(a) while(!a.empty())

// strings
#define stol(s) transform(all(s), s.begin(), ::tolower)
#define stou(s) transform(all(s), s.begin(), ::toupper)
#define convctoss(c) string s; int i = 0; while(c[i] != '\0') { s += c[i]; i++; }

// even/odd
#define iso(n) n % 2 != 0
#define ise(n) n % 2 == 0

// fxn
#define factt(n) int res = 1; for (int i = 2; i <= n; i++) { res = res * i; }
#define nCrr(n, r) int q = 1; for (int i = 2; i <= n; i++) { q = q * i; } int w = 1; for (int i = 2; i <= r; i++) { w = w * i; } int e = 1; for (int i = 2; i <= n - r; i++) { e = e * i; } int res = q / (w * e)
#define freqss(s) int a[26]; memset(a, 0, sizeof(a)); fo(i, s.length()) { a[s[i] - 'a']++; } // for lower 26 char
#define isPalindrome(s) int n = s.length(); int mid = n / 2, i = 0, j = n - 1; bool flag = false; while(i <= mid && j >= mid) if(s[i] == s[j]) flag = true; else flag = false; break; i++; j--;
#define rev(n) int ans = 0; while(n) { ans = ans * 10 + n % 10; n /= 10; }

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
const ll INF = 1e18; // not too close to LLONG_MAX
const db PI = acos((db)-1);
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1}; // for every grid problem!!
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
template<class T> using pqg = priority_queue< T, vector<T>, greater<T> >;

// bitwise ops
// also see https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
constexpr int pct(int x) { return __builtin_popcount(x); } // # of bits set
constexpr int bits(int x) { // assert(x >= 0); // make C++11 compatible until USACO updates ...
    return x == 0 ? 0 : 31-__builtin_clz(x); } // floor(log2(x))
constexpr int p2(int x) { return 1<<x; }
constexpr int msk2(int x) { return p2(x)-1; }

ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down

tcT> bool ckmin(T& a, const T& b) {
    return b < a ? a = b, 1 : 0; } // set a = min(a,b)
tcT> bool ckmax(T& a, const T& b) {
    return a < b ? a = b, 1 : 0; }

tcTU> T fstTrue(T lo, T hi, U f) {
    hi ++; assert(lo <= hi); // assuming f is increasing
    while (lo < hi) { // find first index such that f is true
        T mid = lo + ( hi - lo ) / 2;
        f(mid) ? hi = mid : lo = mid + 1;
}
return lo;
}
tcTU> T lstTrue(T lo, T hi, U f) {
    lo --; assert(lo <= hi); // assuming f is decreasing
    while (lo < hi) { // find first index such that f is true
        T mid = lo+(hi-lo+1)/2;
f(mid) ? lo = mid : hi = mid - 1;
}
return lo;
}
tcT> void remDup(vector<T>& v) { // sort and remove duplicates
    sort(all(v)); v.erase(unique(all(v)), end(v)); }
tcTU> void erase(T& t, const U& u) { // don't erase
    auto it = t.find(u); assert(it != end(t));
    t.erase(it); } // element that doesn't exist from (multi)set

// MIN MAX
#define tcTUU tcT, class ...U
tcT> T MIN(T t) { return t; } // can't use &(ref) coz l value
tcTUU> T MIN(T t, U... u) {  return min(MIN(t), MIN(u...)); }
tcT> T MAX(T t) { return t; } // can't use &(ref) coz l value
tcTUU> T MAX(T t, U... u) {  return max(MAX(t), MAX(u...)); }

// INPUT
#define tcTUU tcT, class ...U
tcT> void re(complex<T>& c);
tcT> void rec(complex<T>& c);
tcTU> void re(pair<T,U>& p);
tcT> void re(V<T>& v);
tcT> void re(T a[]);
tcT, size_t SZ> void re(AR<T,SZ>& a);

tcT> void re(T& x) { cin >> x; }
void rec(char& c) { c = gc(); }
void rec(int& n) { scanf("%d", &n); }
void rec(ll& n) { scanf("%lld", &n); }
void rec(double& d) { scanf("%lf", &d); }
void re(string& s) { strt(s); }
void re(double& d) { string t; re(t); d = stod(t); }
void re(long double& d) { string t; re(t); d = stold(t); }
tcTUU> void re(T& t, U&... u) { re(t); re(u...); }

tcT> void re(complex<T>& c) { T a,b; re(a, b); c = {a, b}; }
tcTU> void re(pair<T,U>& p) { re(p.f,p.s); }
tcT> void re(V<T>& x) { trav(a, x) re(a); }
tcT> void re(T x[], int n) { for(int i = 0; i < n; i++) { cin >> x[i]; } }
tcT, size_t SZ> void re(AR<T,SZ>& x) { trav(a, x) re(a); }
tcT> void rv(int n, V<T>& x) { x.rsz(n); re(x); }

// TO_STRING
#define ts to_string
string ts(char c) { return string(1,c); }
string ts(const char* s) { return (string)s; }
string ts(string s) { return s; }
string ts(bool b) {
    // #ifdef LOCAL
    // 	return b ? "true" : "false";
    // #else
    return ts((int)b);
    // #endif
}
tcT> string ts(complex<T> c) {
    stringstream ss; ss << c; return ss.str(); }
string ts(V<bool> v) {
    string res = "{"; fo(i,sz(v)) res += char('0'+v[i]);
    res += "}"; return res; }
template<size_t SZ> string ts(bitset<SZ> b) {
    string res = ""; fo(i,SZ) res += char('0'+b[i]);
    return res; }
tcTU> string ts(pair<T,U> p);
tcT> string ts(T v) { // containers with begin(), end()
    #ifdef LOCAL
        bool fst = 1; string res = "{";
        for (const auto& x: v) {
            if (!fst) res += ", ";
            fst = 0; res += ts(x);
        }
        res += "}"; return res;
    #else
        bool fst = 1; string res = "";
        for (const auto& x: v) {
            if (!fst) res += " ";
            fst = 0; res += ts(x);
        }
        return res;

    #endif
}
tcTU> string ts(pair<T,U> p) {
    #ifdef LOCAL
        return "("+ts(p.f)+
+ts(p.s)+")";
    #else
        return ts(p.f)+" "+ts(p.s);
    #endif
}

// OUTPUT
tcT> void pr(T x) { cout << ts(x); }
void prc(char c) { pc(c); }
void prc(int n) { printf("%d", n); }
void prc(double n) { printf("%lf", n); }
void prc(long long n) { printf("%lld", n); }
tcTUU> void pr(const T& t, const U&... u) {
    pr(t); pr(u...); }
void prs() { cout << endl; } // print w/ spaces
tcTUU> void prs(const T& t, const U&... u) {
    pr(t); if (sizeof...(u)) pr(" "); prs(u...); }
void prlbr() { cout << endl; } // print w/ line break
tcTUU> void prlbr(const T& t, const U&... u) {
    pr(t); if (sizeof...(u))  lbr(); prlbr(u...); }
// DEBUG
void DBG() { cerr << "]" << endl; }
tcTUU> void DBG(const T& t, const U&... u) {
    cerr << ts(t); if (sizeof...(u)) cerr << ", ";
    DBG(u...); }
#ifdef LOCAL // compile with -DLOCAL, chk -> fake assert
    #define dbg(...) cerr << "Line(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
    #define chk(...) if (!(__VA_ARGS__)) cerr << "Line(" << __LINE__ << ") -> function(" \ << __FUNCTION__  << ") -> CHK FAILED: (" << #__VA_ARGS__ << ")" << lbr(), exit(0);
#else
    #define dbg(...) 0
    #define chk(...) 0
#endif

void setPrec() { cout << fixed << setprecision(15); } //the value is represented with exactly as many digits in the decimal part as specified by the precision field (precision)
void unsyncIO() { ios::sync_with_stdio(false); cin.tie(0); } // using this then dont use C i/p as it makes cin.. faster as scanf

// FILE I/O
void setIn(string s) { freopen(s.c_str(), "r", stdin); } // this takes c as i/p so convert it in c and if it is already in c then it doesn't matter
void setOut(string str) { freopen(str.c_str(), "w", stdout); }
void setIO(string s = "", string str = "") { // initialize "" intialize everything it's a good habit
unsyncIO(); setPrec();
cin.exceptions(cin.failbit);
// throws exception when do smth illegal
// ex. try to read letter into int
if (sz(s) && sz(str)) setIn(s), setOut(str); // for USACO
}

// make sure to intialize ALL GLOBAL VARS between tcs!

int getBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos) {
    return (n | (1 << pos));
}

int clearBit(int n, int pos) {
    int mask = ~(1 << pos);
    return (n & mask);
}

int toggleBit(int n, int pos) {
    return (n xor (1 << pos));
}

int updateBit(int n, int pos, int value) {
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}

int computeXOR(int n) {
    if(n % 4 == 0) return n;
    else if(n % 4 == 1) return 1;
    else if(n % 4 == 2) return n + 1;
    else return 0;
}

int equalSX(int n) {
    int x; // where x is unset bits(0)
    return pow(2, x);
}

void swapBit(int a, int b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

int countSetBit(int n) {
    int count = 0;
    while(n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

bool powerOf2(int n) {
    return (n && !(n & n - 1));
    // to get power floor(log2(n));
}

void subset(int a[], int n) {
    fo(i, 1 << n) {
        fo(j, n) {
            if(i & (i << j)) {
                pr(a[i]);
            }
        }
        lbr();
    }
}

string deciToBinary(int n) {
    string s;
    ROF(i, 63, 0) {
        int k = n >> i;
        if(k & 1) s += '1';
        else s+= '0';
    }
    return s;
}

string deciToBinary2(int n) {
    string s = bitset<64> (n).to_string();

    const auto loc1 = s.find("1");

    if(loc1 != string::npos) return s.substr(loc1);
    return "0";
}

int binaryToDeci(string s) {
    return stoi(s, 0, 2); 
}

void solve() {

//    prlbr(getBit(5, 2));
//    pr(setBit(2, 0));
//    pr(clearBit(5, 2));
    // pr(updateBit(5, 1, 1));

    // int n = 16;

    // pr(__builtin_clz(n));
    // pr(__builtin_ctz(n));
    // pr(__builtin_popcount(n));

    // int n = 0b0100;
    // pr(n);

    // pr(powerOf2(16));

}

int main() {

    setIO();
    int t;
    re(t);
    while(t--) {
        solve();
        lbr();
    }

    return 0;

// you should actually read the stuff at the bottom

}
/* stuff you should look for
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
* DON'T GET STUCK ON ONE APPROACH
* Be better at not losing instead of being better at handling
*/