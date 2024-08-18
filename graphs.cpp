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

// stacks & queus
using sti = stack<int>;
using stl = stack<ll>;
using stb = stack<bool>;
using stc = stack<char>;
using sts = stack<string>;
using qi = queue<int>;
using ql = queue<ll>;
using qb = queue<bool>;
using qc = queue<char>;
using qs = queue<string>;

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
#define clear(a) memset(a, -1, sizeof(a))
#define clearmax(a) memset(a, MOD, sizeof(a))

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
#define pvi(v, n) int input; for(int i = 0; i < n; ++i) { v.push_back(si(input)); }

#define lb lower_bound
#define ub upper_bound
tcT> int lwb(V<T>& a, const T& b) { return int(lb(all(a),b)-bg(a)); }
tcT> int upb(V<T>& a, const T& b) { return int(ub(all(a),b)-bg(a)); }

// stacks & queues
#define tcTUU tcT, class ...U
tcT> T poop(stack<T> &st) { T t = st.top(); st.pop(); return t; }
tcT> T froont(queue<T> &q) { T t = q.front(); q.pop(); return t; }

// heaps
using pqmxh = priority_queue<int, vi>;
using pqmnh = priority_queue<int, vi, greater<int>>;

// hashing
using mii = map<int, int>;
using mis = map<int, string>;
using msi = map<string, int>;
using umii = unordered_map<int, int>;
using umis = unordered_map<int, string>;
using umsi = unordered_map<string, int>;

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
#define tcTUU tcT, class ...U
tcT> T gcd(T a, T b) { while(b) { T rem = a % b; a = b; b = rem; } return a; } 
tcT> T lcm(T a, T b) { return (a * b) / gcd(a, b);; }

const int MOD = 1e9+7; // 998244353; INT_MAX seh bhi kr skta h
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
	template<class T> void pr(stack<T> &st) { while(!st.empty()) { pr(poop(st)); } }
	template<class T> void pr(queue<T> &q) { while(!q.empty()) { pr(froont(q)); } }
	template<class T> void pr(set<T> &s) { for(auto &i: s) pr(i); }
	template<class T, class U> void pr(map<T, U> &m) { for(auto &pr: m) { cout << pr.first << " " << pr.second << endl; } }
	 template<class T, class U> void pr(unordered_map<T, U> &m) { for(auto &pr: m) { cout << pr.first << " " << pr.second << endl; } }
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

// const int N = 1e5 + 2;
// vi adjl[N];

void dfs(int nodeNum, vi &vis, vi adj[], vi &storeDfs) {
	storeDfs.pb(nodeNum);
	vis[nodeNum] = 1;
	for(auto it: adj[nodeNum]) {
		if(!vis[it]) dfs(it, vis, adj, storeDfs);
	}
}

vi dfsOfGraph(int v, vi adj[]) {
	vi storeDfs; 
	vi vis(v + 1, 0);
	FOR(i, 1, v + 1) {
		if(!vis[i]) dfs(i, vis, adj, storeDfs);
	}
}


vi bfsOfGraph(int v, vi adj[]) {
	vi storeBfs; 
	vi vis(v + 1, 0);
	
	FOR(i, 1, v + 1) {
		if(!vis[i]) {
			qi q;
			q.push(i);
			vis[i] = 1;

			while(!q.empty()) {
				int nodeNum = froont(q);
				storeBfs.pb(nodeNum);

				for(auto it: adj[nodeNum]) {
					if(!vis[i]) {
						q.push(it);
						vis[it] = 1;
					}
				}
			}
		}
	}
	return storeBfs;
}

void topologicalSort(vi adj[], int nodeNum, vi &vis, sti &s) {
	vis[nodeNum] = 1;
	for(auto it: adj[nodeNum]) {
		if(!vis[it]) topologicalSort(adj, it, vis, s);
	}

	//post order meh stack meh push
	s.push(nodeNum);
}

sti topologicalSortofGraph(int v, vi adj[]) {
	sti s;
	vi vis(v, 0);
	fo(i, v) {
		if(!vis[i]) topologicalSort(adj, i, vis, s);
	}

	return s;
}

bool isGraphCyclic(int v, vi adj[]) {
	vi vis(v, 0);
	fo(i, v) {
		if(!vis[i]) {
			qi q;
			q.push(i);

			while(!q.empty()) {
				int nodeNum = froont(q); //remove

				if(vis[nodeNum]) return 1; // check idhr ho rha cycle thora sa code diff h bfs true wala ki kab vis true krna h bas yehi diff h

				vis[nodeNum] = 1;

				for(auto it: adj[nodeNum]) {
					if(!vis[it]) {
						q.push(it); // abhi mark nhi kara hai 
					}
				}
			}

		}
	}
	return 0;
}

void drawTreeAndGenCom(vi adj[], vi &vis, int nodeNum, vi &a) {
	vis[nodeNum] = 1;
	a.pb(nodeNum);

	each(it, adj[nodeNum]) {
	// for(auto it: adj[nodeNum]) {
		if(!vis[it]) {
			drawTreeAndGenCom(adj, vis, it, a); //continuation meh hi tree draw krdo
		}
	}
}

void getConnectedComponents(vi adj[], int v) {
	vi vis(v, 0);
	vvi arr;
	fo(i, v) {
		if(!vis[i]) {
			vi a;
			drawTreeAndGenCom(adj, vis, i, a);
			arr.pb(a);
		}
	}
}

bool bipartiteBfs(int nodeNum, vi adj[], vi &color) {
	qi q;
	q.push(nodeNum);
	
	while(!q.empty()) {
		int node = froont(q);
		color[node] = 1; // 0 or 1 
		each(it, adj[node]) {
			if(color[it] == -1) {
				color[it] = 1 - color[node]; // opo clr ajaiga 1-0 1-1
			} else if(color[it] == color[node]) { // it toh adj node tha na toh it and node ka dono adjacent ka same clr hojai toh false return kardo
				return false;
			}
		}
	}

	return true;
}

bool checkBipartite(vi adj[], int n) {
	vi color(n, -1);
	fo(i, n) {
		if(color[i] == -1) {
			if(!bipartiteBfs(i, adj, color)) return 0;
		}
	}

	return 1;
}

// p parent array ko 0 1 2 ... initialize krde
int Find(int p[], int x) {
	if(p[x] == x) return x;
	// return Find(p, p[x]);

	p[x] = Find(p, p[x]); //path compression
	return p[x];
}

// r rank array ko 1 1 1 ... initialize krdo
void Union(int p[], int x, int y, int r[]) {
	int lx = Find(p, x);
	int ly = Find(p, y);

	if(lx != ly) {
		// p[ly] = lx;
		//union by rank
		if(r[lx] > r[ly]) p[ly] = lx;
		else if(r[lx] < r[ly]) p[lx] = ly;
		else {
			p[lx] = ly;
			r[ly]++;
		}
	}
}

bool cycleDetectionUsingDSU(int x, int y, int p[], int r[]) {
	int lx = Find(p, x);
	int ly = Find(p, y);

	if(lx == ly) return 1;
	Union(p, x, y, r);

	return 0;
}

void primsAlgo(vpi adj[], int v) {
	vi vis(v, 0);
	fo(i, v) {
		if(!vis[i]) {
			pqg<pair<int, pii>> pq;
			pq.push({0, {-1, 0}});

			while(!pq.empty()) {
				auto ppaaiirr = pq.top();
				pq.pop();

				if(!vis[ppaaiirr.S.S]) {
					vis[ppaaiirr.S.S] = 1;
					pr(ppaaiirr);

					each(it, adj[ppaaiirr.S.S]) {
						if(!vis[it.F]) {
							pq.push({it.S, {ppaaiirr.S.S,it.F}}); // it.S weight h new ka ppaaiirr.S.S toh old ka v h adj jimeh find kiya and it.F vertix h new ka
						}
					}
				}
			}
		}
	}
}


// yeh sab hum pq meh bhi kr skte the but aise krliya ab
struct node {
	int u, v, wt;
	node(int first, int second, int weight) {
		u = first;
		v = second;
		wt = weight;
	}
};

bool comp(node a, node b) {
	return a.wt < b.wt;
}

// DSU upr h

//krushkal with struct
void krushkalAlgo(vector<node> edges, int p[], int r[]) {
	//sorting krlena int main mai.
	int cost = 0;

	vpii mst;

	each(it, edges) {
		if(Find(p, it.u) != Find(p, it.v)) {
			cost += it.wt;
			mst.pb({it.u, it.v});
			Union(p, it.u, it.v, r); //yeh mt bhulna
		}
	}
}

//krushkal with vpipi
int Find(vector<int> &p, int x) {
        if(p[x] == x) return x;

        p[x] = Find(p, p[x]);
        return p[x];
}
void Union(vector<int> &p, int x, int y, vector<int> &r) {
	int lx = Find(p, x);
	int ly = Find(p, y);

	if(lx != ly) {
		if(r[lx] > r[ly]) p[ly] = lx;
		else if(r[lx] < r[ly]) p[lx] = ly;
		else {
			p[lx] = ly;
			r[ly]++;
		}
	}
}
int krushkalAlgo(vector<pair<int,pair<int, int>>> &edges) {	
	// {wt, {u, v}} egde mai
	sort(begin(edges), end(edges));
        int cost = 0;

	//making p and r
	// parent p ka size init with i initially sab apne parent
        vector<int> p(1e9 + 2, 0);
        for(int i = 0; i < size(p); ++i) p[i] = i;
        
	// rank r ka size dekhlo  init with 0 rank h kyuki initially sab 0
        vector<int> r(1e9 + 2, 0);

        for(auto it: edges) {
            if(Find(p, it.second.first) != Find(p, it.second.second)) {
                cost += it.first;
                Union(p, it.second.first, it.second.second, r);
            }
        }
        
        return cost;
}

// print dijkstra
void dijkstraAlgo(vpi adj[], int v) {
	// distance array bnale to know distance from every node
	vi vis(v, 0);
	fo(i, v) {
		if(!vis[i]) {
			pqg<pair<int, pii>> pq;
			pq.push({0, {-1, 0}});

			while(!pq.empty()) {
				auto ppaaiirr = pq.top();
				pq.pop();

				if(!vis[ppaaiirr.S.S]) {
					vis[ppaaiirr.S.S] = 1;
					pr(ppaaiirr); // idhr hi store krle path bs kyuki ek hi baar nikal rha h.

					each(it, adj[ppaaiirr.S.S]) {
						if(!vis[it.F]) {
							pq.push({it.S + ppaaiirr.F, {ppaaiirr.S.S + it.F,it.F}}); // idhr it.S + pair.F bhi kr rhe purana weight kelia
						}
					}
				}
			}
		}
	}
}
// store with distance array yehi sahi appraoch h
vector<int> dijkstra(int v, vector<vector<int>> adj[], int s) {
        
        vector<int> darr(v, INT_MAX);
        darr[s] = 0;
        vector<int> vis(v, 0);
    	for(int i = 0; i < v; ++i) {
    		if(!vis[i]) {
    		    pqg<pair<int, int>> pq;
    // 			priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>, greater<pair<int, pair<int, int>>> pq; // min heap
    			pq.push({0, s});
    
    			while(!pq.empty()) {
    				auto ppaaiirr = pq.top();
    				pq.pop();
                                int dist = ppaaiirr.first;
    				if(!vis[ppaaiirr.second]) {
    					vis[ppaaiirr.second] = 1;
                       
    					for(auto it: adj[ppaaiirr.second]) {
    						if(!vis[it[0]]) {
    						    if(dist + it[1] < darr[it[0]]) {
    						        darr[it[0]] = dist + it[1];
    						        pq.push({darr[it[0]], it[0]}); // it.S weight h new ka ppaaiirr.S.S toh old ka v h adj jimeh find kiya and it.F vertix h new ka
    						    }
    						    
    						}
    					}
    				}
    			}
    		}
    	}
    	
    	return darr;
    }

struct node {
	int u, v, wt;
	node(int first, int second, int weight) {
		u = first;
		v = second;
		wt = weight;
	}
};


void solve() {

	// int n, m; // n = no. of vertices m = no. of edges
	// re(n, m);

	// vvi adjm(n + 1, vi(n + 1, 0));

	// fo(i, m) {
	// 	int x, y;
	// 	re(x, y);

	// 	adjm[x][y] = 1;
	// 	adjm[y][x] = 1;
	// }

	// vi adj[n]; // arr[{vector}, {vecotr}...] // yeh better coz ref seh pass nhi krna pdhta
	// // ya
	// // vvi adj(n); vector{{vector},{vector}...}

	// fo(i, m) {
	// 	int x, y;
	// 	re(x, y);

	// 	adjl[x].pb(y);
	// 	adjl[y].pb(x);
	// }

	// int n, m;
	// re(n, m);

	// vpi adj[n]; // with weight le rhe h ab

	// fo(i, m) {
	// 	int x, y, wx, wy;
	// 	re(x, y, wx, wy);

	// 	adj[x].pb({y, wy});
	// 	adj[y].pb({x, wx});
	// }

	// int n, m;
	// re(n, m);

	// // graph linarly store kara h struct node bnake
	// vector<node> edges;

	// fo(i, m) {
	// 	int u, v, wt;
	// 	re(u, v, wt);

	// 	edges.pb(node(u, v, wt));
	// }

	// sort(all(edges), comp);

	// int n, m;
	// re(n, m);

	// // // graph linarly store kara h struct node bnake
	// vector<node> edges;

	// fo(i, m) {
	// 	int u, v, wt;
	// 	re(u, v, wt);

	// 	edges.pb(node(u, v, wt));
	// }

	// int src;
	// re(src);

	// int inf = 10000000;
	// vi dist(n, inf);

	// dist[src] = 0; // src seh src tk ka zero 

	// FOR(i, 1, n) {
	// 	each(it, edges) {
	// 		if(dist[it.u] + it.wt < dist[it.v]) {
	// 			dist[it.v] = dist[it.u] + it.wt;
	// 		}
	// 	}
	// }

	// int fl = 0;
	// each(it, edges) {
	// 	if(dist[it.u] + it.wt < dist[it.v]) {
	// 		pr("-ve cycle");
	// 		fl = 1;
	// 		break;
	// 	}
	// }
	int n = 4; // no. of vertixes
	vvi adj;
	FOR(k, 1, n + 1) {
		FOR(i, 1, n + 1) {
			FOR(j, 1, n + 1) {
				adj[i][j] = min(adj[i][j], adj[i][k] + adj[j][k]);
			}
		}
	}
}

int main() {

	setIO();
	int TC;
	re(TC);
	while(TC--) {
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