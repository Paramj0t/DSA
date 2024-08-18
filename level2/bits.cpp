#include <bits/stdc++.h>

using namespace std;

// General
using ll = long long;
using db = long double; // or double, if TL is tight
using ull = unsigned long long;
#define ld(x) x % 10
#define evs = {}
#define ec = char(0)

// Declarations
#define tcT template<class T
#define tcTU tcT, class U
// ^ lol this makes everything look weird but I'll try it
// Array
tcT, size_t SZ> using AR = array<T,SZ>;
// Pair
tcTU> using PR = pair<T, U>;
using pi = PR<int, int>;
using pll = PR<ll, ll>;
using pd = PR<db, db>;
using pis = PR<int, string>;
using pipi = PR<int, pi>;
// Vector
tcT> using V = vector<T>;
using vi = V<int>;
using vb = V<bool>;
using vll = V<ll>;
using vd = V<db>;
using vs = V<string>;
using vc = V<char>;
using vpi = V< pi >;
using vpll = V< pll >;
using vpd = V< pd >;
using vvi = V< vi >;
using vvll = V< vll >;
using vvd = V< vd >;
using vvb = V< vb >;
using vvs = V< vs >;
using vvc = V< vc >;
// Stack and Queue
tcT> using S = stack<T>;
tcT> using Q = queue<T>;
using sti = S<int>;
using stll = S<ll>;
using stb = S<bool>;
using stc = S<char>;
using sts = S<string>;
using qi = Q<int>;
using qd = Q<double>;
using qll = Q<ll>;
using qb = Q<bool>;
using qc = Q<char>;
using qs = Q<string>;
// (Heap) Priority Queue
tcT> using pqg = priority_queue< T, vector<T>, greater<T> >;
tcT> using pq = priority_queue< T, vector<T> >;
using pqmxhi = pq<int>;
using pqmnhi = pqg<int>;
using pqmxhll = pq<ll>;
using pqmnhll = pqg<ll>;
using pqmxhd = pq<double>;
using pqmnhd = pqg<double>;
using pqmxhpi = pq<pi>;
using pqmnhpi = pqg<pi>;
using pqmxhpipi = pq<pipi>;
using pqmnhpipi = pqg<pipi>;
// (Hash) Maps
tcTU> using M = map<T, U>;
tcTU> using UM = unordered_map<T, U>;
using mi = M<int, int>;
using mll = M<ll, ll>;
using md = M<double,double>;
using mis = M<int, string>;
using msi = M<string, int>;
using mci = M<char, int>;
using umi = UM<int, int>;
using umll = UM<ll, ll>;
using umd = UM<double,double>;
using umis = UM<int, string>;
using umsi = UM<string, int>;
using umci = UM<char, int>;
// set
tcT> using SET = set<T>;
tcT> using US = unordered_set<T>;
using seti = SET<int>;
using setll = SET<ll>;
using setd = SET<double>;
using setc = SET<char>;
using sets = SET<string>;
using usi = US<int>;
using usll = US<ll>;
using usd = US<double>;
using usc = US<char>;
using uss = US<string>;

// arrays
#define clr(a) memset(a, 0, sizeof(a))
#define clear(a) memset(a, -1, sizeof(a))
#define clearmax(a) memset(a, MOD, sizeof(a))

// pairs
#define mp make_pair
#define F first
#define S second

// vectors
#define sz(v) int((v).size())
#define bg(v) begin(v)
#define all(v) bg(v), end(v)
#define rall(v) v.rbegin(), v.rend() //greater<int>() hi h
#define sortalla(v) sort(all(v))
#define sortalld(v) sort(all(v), greater<int>());
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pb push_back
#define eb emplace_back
#define pf push_front
#define revi(v, n) int input; for(int i = 0; i < n; ++i) { v.push_back(si(input)); }
#define lb lower_bound
#define ub upper_bound
tcT> int lwb(V<T>& a, const T& b) { return int(lb(all(a),b)-bg(a)); }
tcT> int upb(V<T>& a, const T& b) { return int(ub(all(a),b)-bg(a)); }

// stacks & queues
#define tcTUU tcT, class ...U
tcT> T poop(stack<T> &st) { T t = st.top(); st.pop(); return t; }
tcT> T froont(queue<T> &q) { T t = q.front(); q.pop(); return t; }

// strings
#define stol(s) transform(all(s), s.begin(), ::tolower)
#define stou(s) transform(all(s), s.begin(), ::toupper)
bool contains(string s1, string s2) { if(s1.find(s2) != string::npos) return 1; return 0; }

// loops
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define ROF(i, b, a) for (int i = b; i >= a; --i)
#define fo(i, n) for(int i = 0; i < n; ++i)
#define foRev(i, n) for(int i = n - 1; i >= 0; --i)
#define fofo(i, n, j, m) for(int i = 0; i < n; ++i) { for(int j = 0; j < m; ++j)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); ++it)
#define each(a,x) for (auto& a: x)
#define qs(a) while(!a.empty())

// General fxn
tcT> T rev(T m) { T res = 0, n = m; while(n) { res = res * 10 + n % 10; n /= 10; } return res; }
tcTU> auto fact(T n) { U res = 1; for (int i = 2; i <= n; ++i) { res = res * i; } return res; }
bool isPalindrome(string s) { int n = s.length(); int mid = n / 2, i = 0, j = n - 1; bool flag = false; while(i <= mid && j >= mid) { if(s[i] == s[j]) { flag = true; } else { flag = false; break; } i++; j--; } if(flag) return true; else return false; }
bool isPrime(int n) { int prime[n + 1]; clr(prime); FOR(i, 2, n + 1) { if(prime[i] == 0) { for(int j = i*i; j <= n; j += i) { prime[j] = 1; } } } return (prime[n] == 0) ? 1 : 0; }

// MIN MAX
tcT> T MIN(T t) { return t; } // can't use &(ref) coz l value
tcTUU> T MIN(T t, U... u) {  return min(MIN(t), MIN(u...)); }
tcT> T MAX(T t) { return t; } // can't use &(ref) coz l value
tcTUU> T MAX(T t, U... u) {  return max(MAX(t), MAX(u...)); }

const int MOD = 1e9+7; // 998244353; INT_MAX seh bhi kr skta h
const int MX = 2e5+5;
const ll BIG = 1e18; // not too close to LLONG_MAX 18 digits can be stored in long long
const db PI = acos((db)-1);
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1}; // for every grid problem!!
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

// bitwise ops
// also see https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
constexpr ll ls(ll n, ll pos) { return n*1LL << pos; } // decimal wala value return and for power 2 and mask number isse bnalo
constexpr ll rs(ll n, ll pos) { return n*1LL >> pos; } 
constexpr ll setBit(ll n, ll pos) { return (n | ls(1, pos)); }
constexpr ll unsetBit(ll n, ll pos) { return (n & ~ls(1, pos)); }
constexpr ll toggleBit(ll n, ll pos) { return (n xor ls(1, pos)); }
constexpr bool checkBit(ll n, ll pos) { return (n & ls(1, pos)); }
constexpr bool iso(ll n) { return n & 1; } // odd ans last bit 
constexpr bool ise(ll n) { return !(n & 1); } // even
constexpr ll mulby2(ll n) { return ls(n, 1); }
constexpr ll divby2(ll n) { return rs(n, 1); } // int division
constexpr ll clearLsb(ll n, ll pos) { return n & ~(ls(1, pos + 1) - 1); }
constexpr ll clearMsb(ll n, ll pos) { return n & (ls(1, pos + 1) - 1); }
constexpr bool ispower2(ll n) { return !(n & (n - 1)); }
constexpr ll pct(ll x) { return __builtin_popcountll(x); } // count of set bits pct = popcount
constexpr ll clz(ll x) { return __builtin_clzll(x); } // leading zeros 
constexpr ll ctz(ll x) { return __builtin_ctzll(x); } // trailing zeros
constexpr ll bits(ll x) { // assert(x >= 0); // make C++11 compatible until USACO updates ...
return x == 0 ? 0 : 64 - __builtin_clzll(x); } // log2(x) + 1 total bits
string deciToBinary(ll n) { string s = bitset<64> (n).to_string(); const auto loc1 = s.find("1"); if(loc1 != string::npos) return s.substr(loc1); return "0"; }
ll binaryToDeci(string s) { return stoll(s, 0, 2); } // only for checking purpose use these 2 mehtods ... use 31 ya 63 wala loop ... ya while loop

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
		T mid = lo+(hi-lo+1) / 2;
		f(mid) ? lo = mid : hi = mid - 1;
	}
	return lo;
}
tcT> void remDup(vector<T>& v) { // sort and remove duplicates
	sort(all(v)); v.erase(unique(all(v)), end(v)); }
tcTU> void erase(T& t, const U& u) { // don't erase
	auto it = t.find(u); assert(it != end(t));
	t.erase(it); } // element that doesn't exist from (multi)set

inline namespace Helpers {
	//////////// is_iterable
	// https://stackoverflow.com/questions/13830158/check-if-a-variable-type-is-iterable
	// this gets used only when we can call begin() and end() on that type
	tcT, class = void> struct is_iterable : false_type {};
	tcT> struct is_iterable<T, void_t<decltype(begin(declval<T>())),
					decltype(end(declval<T>()))
					>
			> : true_type {};
	tcT> constexpr bool is_iterable_v = is_iterable<T>::value;

	//////////// is_readable
	tcT, class = void> struct is_readable : false_type {};
	tcT> struct is_readable<T,
		typename std::enable_if_t<
		is_same_v<decltype(cin >> declval<T&>()), istream&>
		>
	> : true_type {};
	tcT> constexpr bool is_readable_v = is_readable<T>::value;

	//////////// is_printable
	// // https://nafe.es/posts/2020-02-29-is-printable/
	tcT, class = void> struct is_printable : false_type {};
	tcT> struct is_printable<T,
		typename std::enable_if_t<
		is_same_v<decltype(cout << declval<T>()), ostream&>
		>
	> : true_type {};
	tcT> constexpr bool is_printable_v = is_printable<T>::value;
}

inline namespace Input {
	tcT> constexpr bool needs_input_v = !is_readable_v<T> && is_iterable_v<T>;
	tcTUU> void re(T& t, U&... u);
	tcTU> void re(pair<T,U>& p); // pairs
	tcT> void re(complex<T>& c);
	tcT> void rec(complex<T>& c);
	tcT> void re(V<T>& v);
	tcT> void re(T a[]);
	tcT, size_t SZ> void re(AR<T,SZ>& a);

	// re: read
	tcT> typename enable_if<is_readable_v<T>,void>::type re(T& x) { cin >> x; } // default
	tcT> void re(complex<T>& c) { T a,b; re(a,b); c = {a,b}; } // complex
	tcT> typename enable_if<needs_input_v<T>,void>::type re(T& i); // ex. vectors, arrays
	tcTU> void re(pair<T,U>& p) { re(p.f,p.s); }
	tcT> typename enable_if<needs_input_v<T>,void>::type re(T& i) {
		each(x,i) re(x); }
	tcTUU> void re(T& t, U&... u) { re(t); re(u...); } // read multiple
	tcT> void re(T x[], int n) { for(int i = 0; i < n; ++i) { cin >> x[i]; } }
	void re(string& s) { cin.ignore(); getline(cin, s); cin.ignore(); }
	tcT, size_t SZ> void re(AR<T,SZ>& x) { each(a, x) re(a); }

	// rv: resize and read vectors
	void rv(size_t) {}
	tcTUU> void rv(size_t N, V<T>& t, U&... u);
	template<class...U> void rv(size_t, size_t N2, U&... u);
	tcTUU> void rv(size_t N, V<T>& t, U&... u) {
		t.rsz(N); re(t);
		rv(N,u...); }
	template<class...U> void rv(size_t, size_t N2, U&... u) {
		rv(N2,u...); }

	// dumb shortcuts to read in ints
	void decrement() {} // subtract one from each
	tcTUU> void decrement(T& t, U&... u) { --t; decrement(u...); }
	#define ints(...) int __VA_ARGS__; re(__VA_ARGS__);
	#define int1(...) ints(__VA_ARGS__); decrement(__VA_ARGS__);
}

inline namespace ToString {
	tcT> constexpr bool needs_output_v = !is_printable_v<T> && is_iterable_v<T>;

	// ts: string representation to print
	tcT> typename enable_if<is_printable_v<T>,string>::type ts(T v) {
		stringstream ss; ss << fixed << setprecision(15) << v;
		return ss.str(); } // default
	tcT> string bit_vec(T t) { // bit vector to string
		string res = "{"; fo(i,sz(t)) res += ts(t[i]);
		res += "}"; return res; }
	string ts(V<bool> v) { return bit_vec(v); }
	template<size_t SZ> string ts(bitset<SZ> b) { return bit_vec(b); } // bit vector
	tcTU> string ts(pair<T,U> p); // pairs
	tcT> typename enable_if<needs_output_v<T>,string>::type ts(T v); // vectors, arrays
	tcTU> string ts(pair<T,U> p) { return "("+ts(p.f)+", "+ts(p.s)+")"; }
	tcT> typename enable_if<is_iterable_v<T>,string>::type ts_sep(T v, string sep) {
		// convert container to string w/ separator sep
		bool fst = 1; string res = "";
		for (const auto& x: v) {
			if (!fst) res += sep;
			fst = 0; res += ts(x);
		}
		return res;
		}
	tcT> typename enable_if<needs_output_v<T>,string>::type ts(T v) {
		return "{"+ts_sep(v,", ")+"}"; }

	// for nested DS
	template<int, class T> typename enable_if<!needs_output_v<T>,V<string>>::type
	ts_lev(const T& v) { return {ts(v)}; }
	template<int lev, class T> typename enable_if<needs_output_v<T>,V<string>>::type
	ts_lev(const T& v) {
		if (lev == 0 || !sz(v)) return {ts(v)};
		V<string> res;
		for (const auto& t: v) {
			if (sz(res)) res.bk += ",";
			V<string> tmp = ts_lev<lev-1>(t);
			res.ins(end(res),all(tmp));
		}
		fo(i,sz(res)) {
			string bef = " "; if (i == 0) bef = "{";
			res[i] = bef+res[i];
		}
		res.bk += "}";
		return res;
	}
}

inline namespace Output {
	template<class T> void pr_sep(ostream& os, string, const T& t) { os << ts(t); }
	template<class T, class... U> void pr_sep(ostream& os, string sep, const T& t, const U&... u) {
		pr_sep(os,sep,t); os << sep; pr_sep(os,sep,u...); }
	// print w/ no spaces
	template<class ...T> void pr(const T&... t) { pr_sep(cout,"",t...); }
	// print w/ spaces, end with sameline
	template<class ...T> void prs(const T&... t) { pr_sep(cout," ",t...); }
	// print w/ spaces, end with newline
	void ps() { cout << "\n"; }
	template<class ...T> void prlbr(const T&... t) { pr_sep(cout," ",t...); ps(); }
	// debug to cerr
	template<class ...T> void dbg_out(const T&... t) {
		pr_sep(cerr," | ",t...); cerr << endl; }
	void loc_info(int line, string names) {
		cerr << "Line(" << line << ") -> [" << names << "]: "; }
	template<int lev, class T> void dbgl_out(const T& t) {
		cerr << "\n\n" << ts_sep(ts_lev<lev>(t),"\n") << "\n" << endl; }
	template<class T> void pr(const T& arr, int n) { fo(i, n) pr(arr[i], " "); }
	template<class T> void pr(stack<T> &st) { while(!st.empty()) { pr(poop(st)); } }
	template<class T> void pr(queue<T> &q) { while(!q.empty()) { pr(froont(q)); } }
	template<class T> void pr(set<T> &s) { for(auto &i: s) pr(i); }
	template<class T, class U> void pr(map<T, U> &m) { for(auto &pr: m) { cout << pr.first << " " << pr.second << endl; } }
	template<class T, class U> void pr(unordered_map<T, U> &m) { for(auto &pr: m) { cout << pr.first << " " << pr.second << endl; } }

	#ifdef LOCAL
		#define dbg(...) loc_info(__LINE__,#__VA_ARGS__), dbg_out(__VA_ARGS__)
		#define dbgl(lev,x) loc_info(__LINE__,#x), dbgl_out<lev>(x)
	#else // don't actually submit with this
		#define dbg(...) 0
		#define dbgl(lev,x) 0
	#endif

	const clock_t beg = clock();
	#define dbg_time() dbg((db)(clock()-beg)/CLOCKS_PER_SEC)
}

// FILE I/O
inline namespace FileIO {
	void setIn(string s)  { freopen(s.c_str(),"r",stdin); }
	void setOut(string s) { freopen(s.c_str(),"w",stdout); }
	void setIO(string s = "") {
		cin.tie(0)->sync_with_stdio(0); // unsync C / C++ I/O streams
		// cin.exceptions(cin.failbit);
		// throws exception when do smth illegal
		// ex. try to read letter into int
		if (sz(s)) setIn(s+".in"), setOut(s+".out"); // for old USACO
	}
}

// make sure to intialize ALL GLOBAL VARS between tcs!

int binaryExpoRecur(int a, int b, int M) {
	if(b <= 0) return 1; // any num to power 0 is 1
	
	long res = binaryExpoRecur(a, b / 2, M);
	if(iso(b)) {
		// return a * binaryExpoRecur(a, b / 2) * binaryExpoRecur(a, b / 2); 
		// jada bar call na lage ek hi baar lage nhi toh TC inc hojati
		return (a * ((1LL * res * res) % M)) % M;
	} else {
		// return binaryExpoRecur(a, b / 2) * binaryExpoRecur(a, b / 2);
		return (1LL * res * res) % M;
	}
}

int binaryExpoIterative(int a, int b, int M) {
	int ans = 1;

	while(b) {
		// if(1&b) { // ek tareeke seh odd

		// }

		if(iso(b)) {
			// ans *= a;
			ans = (1LL * ans * a) % M;
		}
		// a *= a;
		a = (a * a * 1LL) % M;
		b = rs(b, 1); // rs ya ls ko store bhi toh karvaiga
	}

	return ans;
}

ll largeExpoIterative(ll a, ll b, ll M) {
	
	ll ans = 1;

	a = a % M; // if a is bigger

	while(b) {

		if(iso(b)) {
			// ans *= a;
			ans = bitMultiply(ans, a, M) % M;
		}
		// a *= a;
		a = bitMultiply(a, a, M) % M;
		b = rs(b, 1);
	}

	return ans;
}

ll bitMultiply(ll a, ll b, ll M) {
	ll ans = 0;

	while(b) {
		if(iso(b)) {
			ans = (ans + a) % M;
		}
		a = (a + a) % M;
		b = rs(b, 1);
	}

	return ans;	
}

ll largeExpoIterativeifBisbada(ll a, ll b, ll M) {
	
	ll ans = 1;


	while(b) {

		if(iso(b)) {
			// ans *= a;
			ans = (1LL * ans * a) % M;
		}
		// a *= a;
		a = (a * a) % M;
		b = rs(b, 1);
	}

	return ans;
}

void solve() {

	// prlbr(INT_MAX);
	// int mxValue = (1LL << 31) - 1;
	// prlbr(mxValue);
	// prlbr(ls(1LL, 31) - 1);

	// unsigned int unmxValue = (1LL << 32) - 1;
	// prlbr(unmxValue);
	// pr(ls(1LL, 32) - 1);

	// int a = 9;
	// int i = 0;

	// if(a & ls(1, i)) {
	// 	pr(1);
	// }

	// if(isSet(a, i)) pr(1);

	// int b = a | ls(1, i);
	// pr(b);

	// pr(setBit(a, i));
	// int c = (a & ~(1 << i));
	// pr(c);
	// pr(unsetBit(a, i));

	// pr(a ^ ls(1, i));
	// pr(toggleBit(a, i));

	// pr(getBit(a, i));

	// if(iso(1)) pr(1);

	// 31 63 yeh sab use kar skte ya direct methods
	// for(int i = 31; i >= 0; --i) {
	// 	if(a & ls(1, i)) coutn++;
	// }

	// // ya 

	// while(n) {}

	// int a = 2;
	// ll b = mulby2(a);
	// pr(mulby2(a));
	// pr(divby2(3));

	// int a = 9;
	// int i = 1;
	// pr(a & ~(ls(1, i + 1) - 1));
	// pr(clearLsb(a, i));

	// pr(ispower2(6));

	// int a = 4, b = 6;
	// a = a ^ b;
	// b = b ^ a;
	// a = a ^ b;

	// O(N)
	// int a = 2, b = 13;
	// int m = 1e9 + 7;

	// FOR(i, 1, b) {
	// 	a *= a;
	// 	a %= M; // badi na chali jai
	// }

	// ll res = largeExpoIterativeifBisbada(b, c, M - 1);
	// ll ans = largeExpoIterativeifBisbada(a, res, M);

	// binaryExpoIterative(a, M - 2, M); // M is prime

}

int main() {

	setIO();
	int TC;
	re(TC);
	while(TC--) {
		solve();
		ps();
	}

	return 0;

// you should actually read the stuff at the bottom

}
/* stuff you should look for
* int overflow, array bounds
* special cases (n=1? n=0? >(=)?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
* DON'T GET STUCK ON ONE APPROACH
* Be better at not losing instead of being better at handling
*/