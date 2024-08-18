#include <bits/stdc++.h>

using namespace std;

// C i/o
#define si(n)  scanf("%d", &n)
#define sl(n)	scanf("%lld", &n)
#define sd(n)  scanf("%lf", &n)
#define ss(s)	scanf("%s", s)
#define ct(c)  cin.getline(c, n);
#define pi(n)	printf("%d", n)
#define pl(n)	printf("%lld", n)
#define pstr(s)  printf("%s", s)
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
using ull = unsigned long long;
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

using vvb = vector< vb >;

#define tcT template<class T
#define tcTU tcT, class U
// ^ lol this makes everything look weird but I'll try it
tcT> using V = vector<T>;
tcT, size_t SZ> using AR = array<T,SZ>;
tcTU> using PR = pair<T, U>;

// pairs
#define mp make_pair
#define F first
#define S second

// arrays
#define ai(a, n) for(int i = 0; i < n; ++i) { si(a[i]); }
#define aiai(a, n, m) for(int i = 0; i < n; ++i) { for(int j = 0; j < m; ++j) { si(a[i][j]); } }
// #define all(a) a.begin(), a.end() or as shown in vectors
#define clr(a) memset(a, 0, sizeof(a))

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
#define vi(v, n) int input; for(int i = 0; i < n; ++i) { v.push_back(si(input)); }
#define vivi(v, n, m) int input; for(int i = 0; i < n; ++i) { for(int j = 0; j < m; ++j) { v.push_back(a[i][j]); } }

#define lb lower_bound
#define ub upper_bound
tcT> int lwb(V<T>& a, const T& b) { return int(lb(all(a),b)-bg(a)); }
tcT> int upb(V<T>& a, const T& b) { return int(ub(all(a),b)-bg(a)); }

// loops
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define ROF(i, b, a) for (int i = b; i >= a; --i)
#define fo(i, n) for(int i = 0; i < n; ++i)
#define foRev(i, n) for(int i = n - 1; i >= 0; --i)
#define fofo(i, n, j, m) for(int i = 0; i < n; ++i) { for(int j = 0; j < m; ++j)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); ++it)
#define each(a,x) for (auto& a: x)
#define qs(a) while(!a.empty())

// strings
#define stol(s) transform(all(s), s.begin(), ::tolower)
#define stou(s) transform(all(s), s.begin(), ::toupper)
#define convctoss(c) string s; int i = 0; while(c[i] != '') { s += c[i]; ++i; }

// even/odd
#define iso(n) (n & 1);
#define ise(n) (!(n & 1));

// fxn
#define factt(n) int res = 1; for (int i = 2; i <= n; ++i) { res = res * i; }
#define nCrr(n, r) int q = 1; for (int i = 2; i <= n; ++i) { q = q * i; } int w = 1; for (int i = 2; i <= r; ++i) { w = w * i; } int e = 1; for (int i = 2; i <= n - r; ++i) { e = e * i; } int res = q / (w * e)
#define freqss(s) int a[26]; memset(a, 0, sizeof(a)); fo(i, s.length()) { a[s[i] - 'a']++; } // for lower 26 char
bool isPalindromee(string s) { int n = s.length(); int mid = n / 2, i = 0, j = n - 1; bool flag = false; while(i <= mid && j >= mid) { if(s[i] == s[j]) { flag = true; } else { flag = false; break; } i++; j--; } if(flag) return true; else return false; }
#define rev(n) int ans = 0; while(n) { ans = ans * 10 + n % 10; n /= 10; }
bool isPrimee(int n) { int prime[n + 1]; clr(prime); FOR(i, 2, n + 1) { if(prime[i] == 0) { for(int j = i*i; j <= n; j += i) { prime[j] = 1; } } } return (prime[n] == 0) ? 1 : 0; }
int gcd(int a, int b) { while(b) { int rem = a % b; a = b; b = rem; } return a; }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
const ll BIG = 1e18; // not too close to LLONG_MAX 18 digits can be stored in long long
const db PI = acos((db)-1);
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1}; // for every grid problem!!
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
template<class T> using pqg = priority_queue< T, vector<T>, greater<T> >;

// bitwise ops
// also see https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
constexpr ll pct(ll x) { return __builtin_popcountll(x); } // # of bits set
constexpr ll clzl(ll x) { return __builtin_clzll(x); }
constexpr ll clzt(ll x) { return __builtin_ctzll(x); }
constexpr ll bits(ll x) { // assert(x >= 0); // make C++11 compatible until USACO updates ...
return x == 0 ? 0 : 64 - __builtin_clzll(x); } // log2(x) + 1 total bits
constexpr int p2(int x) { return 1 << x; }
constexpr int msk(int x) { return p2(x)-1; }
constexpr int getBit(int n, int pos) { return ((n & (1 << pos)) != 0); }
constexpr int setBit(int n, int pos) { return (n | (1 << pos)); }
int clearBit(int n, int pos) { int mask = ~(1 << pos); return (n & mask); }
constexpr int toggleBit(int n, int pos) { return (n xor (1 << pos)); }
int updateBit(int n, int pos, int value) { int mask = ~(1 << pos); n = n & mask; return (n | (value << pos)); }
string deciToBinary(int n) { string s = bitset<64> (n).to_string(); const auto loc1 = s.find(
1
); if(loc1 != string::npos) return s.substr(loc1); return 
0
; }
int binaryToDeci(string s) { return stoi(s, 0, 2); }

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

// MIN MAX
#define tcTUU tcT, class ...U
tcT> T MIN(T t) { return t; } // can't use &(ref) coz l value
tcTUU> T MIN(T t, U... u) {  return min(MIN(t), MIN(u...)); }
tcT> T MAX(T t) { return t; } // can't use &(ref) coz l value
tcTUU> T MAX(T t, U... u) {  return max(MAX(t), MAX(u...)); }

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
	void rec(char& c) { c = gc(); }
	void rec(int& n) { scanf("%d", &n); }
	void rec(ll& n) { scanf("%lld", &n); }
	void rec(double& d) { scanf("%lf", &d); }

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
	template<int, class T> typename enable_if<!needs_output_v<T>,vs>::type
	ts_lev(const T& v) { return {ts(v)}; }
	template<int lev, class T> typename enable_if<needs_output_v<T>,vs>::type
	ts_lev(const T& v) {
		if (lev == 0 || !sz(v)) return {ts(v)};
		vs res;
		for (const auto& t: v) {
			if (sz(res)) res.bk += ",";
			vs tmp = ts_lev<lev-1>(t);
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
	void prc(char c) { pc(c); }
	void prc(int n) { printf("%d", n); }
	void prc(double n) { printf("%lf", n); }
	void prc(long long n) { printf("%lld", n); }
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

const int N = 1e7 + 10;
int dp[N];


int fibDP(int n) {
	if(n == 0 || n == 1) return n;

	if(dp[n] != -1) return dp[n];

	// int fibm1 = fibDP(n - 1);
	// int fibm2 = fibDP(n - 2);
	// int res = fibm1 + fibm2;

	// dp[n] = res;
	dp[n] = fibDP(n - 1) + fibDP(n - 2);

	// return res;

	return dp[n];
}

int fibDPT(int n) {
	dp[0] = 0;
	dp[1] = 1;

	FOR(i, 2, n + 1) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}

int sumSquare(int n) {
	int dp[n + 1];
	clear(dp);

	dp[0] = 0;
	dp[1] = 1;

	FOR(i, 2, n + 1) {
		int mn = INT_MAX;
		for(int j = 1; j * j < i; ++j) {
			int rem = i - j * j;
			if(dp[rem] < mn) mn = dp[rem]; 
		}
		dp[i] = mn + 1; 
	}
	return dp[n];
}

const int N = 1e7 + 10; // 998244353; // bahar meh globally 1e7 kr skte h
int dp[N];

int sumSquare(int n) {
	if(n < 4) return n;

	if(dp[n] != MOD) return dp[n];

	int ans = MOD;
	for(int i = 1; i * i <= n; ++i) {
		ans = min(ans, sumSquare(n - i * i) + 1);
		dp[n] = ans;
	}
	// return ans;
	return dp[n];
}

void coinChangeProblem(int arr[], int n, int dp[], int m, int amt) {

	// abseh dp idhr hi initialize kr diya kr

	fo(i, n) { // phele ab ek coin kelia pure dp array chalega yeh combination meh h ... and permutation meh ek idx/cell kelia sare coins chalenge
		FOR(j, arr[i], m) {
			dp[j] += dp[j - arr[i]];
		}
	}

	pr(dp[amt]);
}

int coinChangeProblemMinCoins(int m, int arr[], int n) {
	if(m == 0) return 0;

	if(dp[m] != MOD) return dp[m];	

	// int ans = INT_MAX;
	int ans  = MOD;
	fo(i, n) {
		if(m - arr[i] >= 0) {
			int subAns = coinChangeProblemMinCoins(m - arr[i], arr, n); // hr jagah gya phle pheli jagah gya ans store kiya ab min seh check kiya then dusri jagah gya
			ans = min(ans, subAns + 1);
			dp[m] = ans;
		}
	}

	// return ans;
	return dp[m];	
}

int dp[N][N]; // 2 cheeze vary kr rhi h isliye 2D dp

int coinChangeProblem(vi &v, int n, int x) {
	if(x == 0) return 1;

	if(x < 0) return 0;

	if(n < 0) return 0;

	if(dp[n][x] != MOD) return dp[n][x];

	dp[n][x] = coinChangeProblem(v, n, x - v[n - 1]) + coinChangeProblem(v, n - 1, x);
	return dp[n][x];
}

void Knapsack(int vals[], int wts[], int n, int cap) {
	int dp[n + 1][cap + 1] = {0};

	FOR(i, 1, n + 1) {
		FOR(j, 1, cap + 1) {
			if(j >= wts[i - 1]) {
				int remCap = j - wts[i - 1];

				if(dp[i - 1][remCap] + vals[i - 1] > dp[i - 1][j]) {
					dp[i][j] = dp[i - 1][remCap] + vals[i - 1];
				} else {
					dp[i][j] = dp[i - 1][j]; // when i doesn't bat
				}
			} else {
				dp[i][j] = dp[i - 1][j]; // when i doesn't bat	
			}
		}
	}
}

int vals[N], wt[N];
int dp[N][N];
int knapsack(int n, int w) {
	if(w <= 0) return 0;

	if(n <= 0) return 0;

	if(dp[n][w] != -1) return dp[n][w];

	if(wt[n - 1] > w) dp[n][w] = knapsack(n - 1, w);
	else dp[n][w] = max(knapsack(n - 1, w - wt[n - 1]) + vals[n - 1], knapsack(n - 1, w));

	return dp[n][w];
}

void lis(int arr[], int n) {

	int dp[n] = {0};
	dp[0] = 1;

	FOR(i, 1, n) {
		int sz = 0;
		fo(j, i) {
			if(arr[i] > arr[j]) {
				if(dp[j] > sz) sz = dp[j];
			}
		}
		dp[i] = sz + 1;
	}
	pr(*max_element(dp, dp + n));
}

int dp[N];
int lis(vi &a, int n) {

	if(dp[n] != -1) return dp[n];

	dp[n] = 1;

	fo(i, n) {
		if(a[n] > a[i]) {
			dp[n] = max(dp[n], 1 + lis(a, i));
		}
	}
	return dp[n];
}

void lcs(string s1, string s2) {
	
	int n = s1.length() + 1;
	int m = s2.length() + 1;
	int dp[n][m] = {0};


	ROF(i, n - 2, 0) {
		ROF(j, m - 2, 0) {
			char c1 = s1[i];
			char c2 = s2[j];

			if(c1 == c2) dp[i][j] = dp[i + 1][j + 1] + 1;
			else dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
		}
	}

	pr(dp[0][0]);
}

int dp[N][M];

int  lcs(string &s1, string &s2, int n, int m) {
	if(n == 0 || m == 0) return 0;

	if(dp[n][m] != -1) return dp[n][m];

	if(s1[n - 1] == s2[m - 1]) dp[n][m] = 1 + lcs(s1, s2, n - 1, m - 1);
	else dp[n][m] = max(lcs(s1, s2, n, m - 1), lcs(s1, s2, n - 1, m));

	return dp[n][m];
}

const int N = 1e3 + 10; // 1e3 hi jata 2D
int dp[N][N];

int lcs(string s, string str) {
	if(s.empty() || str.empty()) return 0;

	if(dp[s.length()][str.length()] != -1) return dp[s.length()][str.length()];

	if(s.back() == str.back()) {
		s.pop_back();
		str.pop_back();

		dp[s.length()][str.length()] =  1 + lcs(s, str);
	} else {
		dp[s.length()][str.length()] = max(lcs(s, string(str.begin(), str.end() - 1)), lcs(string(s.begin(), s.end() - 1), str));
	}

	return dp[s.length()][str.length()];
}


void Nknapsack(int n, int vals[], int wts[], int cap) {

	int dp[cap + 1];

	dp[0] = 0;

	FOR(i, 1, cap + 1) {
		int mx = 0;
		fo(j, n) {
			
			if(wts[j] <= i) {
				int rbagc = i - wts[j];
				int rbagv = dp[rbagc];
				int tbagv = rbagv + vals[j];

				if(tbagv > mx) {
					mx = tbagv;
				}
			}
			
		}
		dp[i] = mx;
	}
}

int vals[N], wt[N];
int dp[N][N];
int knapsack(int n, int w) {
	if(w <= 0) return 0;

	if(n <= 0) return 0;

	if(dp[n][w] != -1) return dp[n][w];

	if(wt[n - 1] > w) dp[n][w] = knapsack(n - 1, w);
	else dp[n][w] = max(knapsack(n - 1, w - wt[n - 1]) + vals[n - 1], knapsack(n - 1, w));

	return dp[n][w];
}

void kadanesAlgo(vi v) {
	int curSum = v[0];
	int oSum = v[0];

	FOR(i, 1, sz(v)) {
		if(curSum > 0) {
			curSum += v[i];
			if(curSum > oSum) oSum = curSum;
		} else {
			curSum = v[i];
		}
	}

	pr(oSum);
}

void lbs(vi v) {
	vi lis(sz(v), 0);

	fo(i, sz(v)) {
		int mx = 0;
		fo(j, i) {
			if(v[j] <= v[i]) {
				if(lis[j] > mx) mx = lis[j];
			}
		}
		lis[i] = mx + 1;
	}

	vi lds(sz(v), 0);

	ROF(i, sz(v) - 1, 0) {
		int mx = 0;

		ROF(j, sz(v) - 1, i + 1) {
			if(v[j] <= v[i]) {
				if(lds[j] > mx) mx = lds[j];
			}
		}
		lds[i] = mx + 1;
	}

	int mx = 0;
	fo(i, sz(v)) mx = max(lis[i] + lds[i] - 1, mx);

	pr(mx);
}

void friendsPair(int n) {
	vi dp(n + 1, 0);
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;

	FOR(i, 3, n + 1) {
		dp[i] = dp[i - 1] + (i - 1) * dp[i - 2];
	}

	pr(dp[n]);
}

void uglyNum(int n) {
	vi dp(n + 1, 0);
	dp[1] = 1;

	int p2 = 1, p3 = 1, p5 = 1;

	FOR(i, 2, n + 1) {
		int f1 = 2 * dp[p2];
		int f2 = 3 * dp[p3];
		int f3 = 5 * dp[p5];

		int mn = MIN(f1, f2, f3);

		dp[i] = mn;

		if(mn == f1) p2++;
		else if(mn == f2) p3++;
		else p5++;
	}

	pr(dp[n]);
}

void solve() {


	fo(i, N) dp[i] = MOD;	
	// clear(dp);

	// fo(i, N) dp[i] = -1;
	// clear(dp);
	// // pr(fibDP(5));
	// pr(fibDPT(5));


	// pr(sumSquare(4));

	// int n;
	// re(n);

	// int arr[n];

	// fo(i, n) re(arr[i]);

	// int amt;
	// re(amt);

	// int dp[amt + 1];
	// clr(dp);
	// dp[0] = 1; // 0 ko lene dena ka ek hi tareeka kuch na kare

	// coinChangeProblem(arr, n, dp, amt + 1, amt);

	// int n;
	// re(n);

	// int vals[n];
	// int wts[n];

	// fo(i, n) re(vals[i]);
	// fo(i, n) re(wts[i]);

	// int cap;
	// re(cap);

	// Knapsack(vals, wts, n, cap);

	// int n;
	// re(n);

	// int arr[n] = {0};

	// fo(i, n) re(arr[i]);

	// lis(arr, n);

	// string s1, s2;
	// re(s1, s2);

	// lcs(s1, s2);


	// int n;
	// re(n);

	// int vals[n];

	// fo(i, n) re(vals[i]);

	// int wts[n];

	// fo(i, n) re(wts[i]);

	// int cap;
	// re(cap);

	// Nkapsack(n, vals, wts, cap);

	// vi v = {4, 3, -2, 6, -14,7, -1, 4, 5};
	// kadanesAlgo(v);

	// vi v = {1, 11, 2, 10, 4, 5, 2, 1};
	// lbs(v);

	// friendsPair(4);

	// uglyNum(4);
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