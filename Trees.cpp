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
#define vi(v, n) int input; for(int i = 0; i < n; ++i) { v.push_back(si(input)); }
#define vivi(v, n, m) int input; for(int i = 0; i < n; ++i) { for(int j = 0; j < m; ++j) { v.push_back(a[i][j]); } }

#define lb lower_bound
#define ub upper_bound
tcT> int lwb(V<T>& a, const T& b) { return int(lb(all(a),b)-bg(a)); }
tcT> int upb(V<T>& a, const T& b) { return int(ub(all(a),b)-bg(a)); }

// stacks & queues
#define tcTUU tcT, class ...U
tcT> T poop(stack<T> &st) { T t = st.top(); st.pop(); return t; }
tcT> T froont(queue<T> &q) { T t = q.front(); q.pop(); return t; }

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

// struct Node {
// 	int data;
// 	struct Node* left; // struct phele likho na likho same baaat
// 	struct Node* right;

// 	Node(int val) {
// 		data = val;
// 		left = NULL;
// 		right = NULL;
// 	}
// };

// void preorder(struct Node* root) {

// 	if(root == NULL) return;
// 	pr(root->data, " ");
// 	preorder(root->left);
// 	preorder(root->right);
// }

// void inorder(struct Node* root) {

// 	if(root == NULL) return;
// 	inorder(root->left);
// 	pr(root->data, " ");
// 	inorder(root->right);
// }

// void postorder(struct Node* root) {

// 	if(root == NULL) return;
// 	postorder(root->left);
// 	postorder(root->right);
// 	pr(root->data, " ");
// }

// int search(int inorder[], int start, int end, int curr) {
// 	FOR(i, start, end + 1) {
// 		if(inorder[i] == curr) return i;
// 	}

// 	return -1; // kabhi nhi aiga
// }

// void inorderPrint(Node* root) {

// 	if(root == NULL) return;
// 	inorder(root->left);
// 	pr(root->data, " ");
// 	inorder(root->right);
// }


// // Node* buildTree(int preorder[], int inorder[], int start, int end) {
// // 	static int idx = 0;

// // 	if(start > end) return NULL;

// // 	int curr = preorder[idx];
// // 	idx++;
// // 	Node* node = new Node(curr);
// // 	if(start == end) return node;

// // 	int pos = search(inorder, start, end, curr);
// // 	node->left =  buildTree(preorder, inorder, start, pos - 1);
// // 	node->right = buildTree(preorder, inorder, pos + 1, end);

// // 	return node;
// // }

// // Node* buildTree(int postorder[], int inorder[], int start, int end) {
// // 	static int idx = 4;

// // 	if(start > end) return NULL;

// // 	int curr = postorder[idx];
// // 	idx--;
// // 	Node* node = new Node(curr);
// // 	if(start == end) return node;

// // 	int pos = search(inorder, start, end, curr);
// // 	node->right = buildTree(postorder, inorder, pos + 1, end);
// // 	node->left =  buildTree(postorder, inorder, start, pos - 1);

// // 	return node;
// // }

// idhr revision time level ka bhi dekhle BT ki construction ka

// void levelOrder(Node* root, int k) {
// 	if(root == NULL) return;

// 	queue<Node*> q;
// 	q.push(root);
// 	q.push(NULL);
// 	int count = 0, sum = 0;

// 	while(!q.empty() && count <= k) {
// 		Node* node = froont(q);
// 		if(node != NULL) {
// 			// pr(node->data, " ");
// 			if(k == count) sum += node->data;
// 			if(node->left != NULL) q.push(node->left);
// 			if(node->right) q.push(node->right);
// 		} else  {
// 			if(!q.empty()) q.push(NULL);
// 			count++;
// 		}
// 	}

// 	pr(sum);
// }

// int size(Node* node) {
// 	if(node == NULL) return 0;

// 	int ls = size(node->left);
// 	int rs = size(node->right);
// 	return ls + rs + 1;
// }

// int sum(Node* node) {
// 	if(node == NULL) return 0;

// 	int lsm = sum(node->left);
// 	int rsm = sum(node->right);
// 	return lsm + rsm + node->data;
// }

// int max(Node* node) {
// 	if(node == NULL) return INT_MIN;

// 	int mxl = max(node->left);
// 	int mxr = max(node->right);
// 	return MAX(mxl, mxr, node->data);
// }

// int height(Node* node) {
// 	if(node == NULL) return 0;

// 	int lh = height(node->left);
// 	int rh = height(node->right);
// 	return max(lh, rh) + 1;
// }

// void  sumRep(Node* &node) {
// 	if(node == NULL) return;

// 	sumRep(node->left);
// 	sumRep(node->right);

// 	if(node != NULL && node->left != NULL) {
// 		node->data += node->left->data;
// 	}
// 	if(node != NULL and node->right != NULL) {
// 		node->data += node->right->data;
// 	}
// }

// bool isBal(Node* root) {
// 	if(root == NULL) return 1;
// 	if(isBal(root->left) == false) {
// 		return 0;
// 	} 
// 	if(isBal(root->right) == false) {
// 		return 0;
// 	}

// 	int lh = height(root->left);
// 	int rh = height(root->right);

// 	if(abs(lh - rh) <= 1) return 1;
// 	return 0;
// }

// void rightView(Node* root) {
// 	if(root == NULL) return;

// 	queue<Node *> q;
// 	q.push(root);

// 	while(!q.empty()) {
// 		int n = q.size();

// 		fo(i, n) {
// 			Node* curr = froont(q);
// 			if(i == n - 1) pr(curr->data);

// 			if(curr->left != NULL) q.push(curr->left);
// 			if(curr->right != NULL) q.push(curr->right);
// 		}

// 	}
// }

// void leftView(Node* root) {
// 	if(root == NULL) return;

// 	queue<Node *> q;
// 	q.push(root);

// 	while(!q.empty()) {
// 		int n = q.size();

// 		fo(i, n) {
// 			Node* curr = froont(q);
// 			if(i == 0) pr(curr->data);

// 			if(curr->left != NULL) q.push(curr->left);
// 			if(curr->right != NULL) q.push(curr->right);
// 		}

// 	}
// }

// int dia(Node* node, int &diameter) {
// 	if(node == NULL) return 0;

// 	int lh = dia(node->left, diameter);
// 	int rh = dia(node->right, diameter);
// 	diameter = max(diameter, lh + rh);
// 	return max(lh, rh) + 1;
// }

// int diameter(Node* node) {
// 	if(node == NULL) return 0;
// 	int ld = diameter(node->left);
// 	int rd = diameter(node->right);
// 	int f = height(node->left) + height(node->right) + 2;

// 	int mx = MAX(ld, rd, f);
// 	return mx;
// }

// bool findPath(Node* node, int data, vi &v) {
// 	if(node == NULL) return 0;

// 	if(node->data == data) {
// 		v.pb(node->data);
// 		return 1;
// 	}

// 	bool filc = findPath(node->left, data, v);
// 	if(filc) {
// 		v.pb(node->data);
// 		return 1;
// 	}

// 	bool firc = findPath(node->right, data, v);
// 	if(firc) {
// 		v.pb(node->data);
// 		return 1;
// 	}

// 	return 0;
// }

// void LCA(Node* node, int n1, int n2) {
// 	vi v1;
// 	bool f1 = findPath(node, n1, v1);
// 	vi v2;
// 	bool f2 = findPath(node, n2, v2);
// 	if(!f1 or !f2) return;
// 	reverse(all(v1));
// 	reverse(all(v2));

// 	int i = 0;
// 	while(v1[i] == v2[i]) i++;

// 	pr(i);
// }

// void flattenBT(Node* node) {
// 	if(node == NULL) return;

// 	if(node->left != NULL) {
// 		flattenBT(node->left);

// 		Node* temp = node->right;
// 		node->right = node->left;

// 		Node *t = node->right;

// 		while(t->right != NULL) {
// 			t = t->right;
// 		}

// 		t->right = temp;
// 	}

// 	flattenBT(node->right);
// }

// void printKLevelsDown(Node* node, int k) {
// 	if(k < 0 && node == NULL) return;
// 	if (k == 0) pr(node->data);

// 	printKLevelsDown(node->left, k - 1);
// 	printKLevelsDown(node->right, k - 1);
// }

// void printKLevelsDownBlock(Node* node, int k, Node* block) {
// 	if(k < 0 && node == NULL and node == block) return;
// 	if (k == 0) pr(node->data);

// 	printKLevelsDownBlock(node->left, k - 1, block);
// 	printKLevelsDownBlock(node->right, k - 1, block);
// }

// void printKNodesFar(Node* node, int data, int k) {
// 	// vi path = findPath(node, data);
// 	// fo(i, sz(path)) {
// 	// 	printKLevelsDownBlock(path[i], k - i, i == 0 ? NULL : path[i - 1]);
// 	// }
// }

// int maxSumPath(Node* node, int &sum) {
// 	if(node == NULL) return;

// 	int ls = maxSumPath(node->left, sum);
// 	int rs = maxSumPath(node->right, sum);
// 	sum = max(sum, ls + rs + node->data);
// 	return node->data + max(ls, rs);
// }

///////// BST //////////

struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};

Node* insertBST(Node* root, int val) {
	if(root == NULL) {
		return new Node(val);
	}
	if(val < root->data) {
		root->left = insertBST(root->left, val);
	} else if(val > root->data) {
		root->right = insertBST(root->right, val);
	} else {
		// nothing to do
	}

	return root;
}

void inorder(Node* root) {
	if(root== NULL) return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int max(Node* root) {
	if(root->right != nullptr) return max(root->right);
	else return root->data;	
}

int min(Node* root) {
	if(root->left != nullptr) return min(root->left);
	else return root->data;	
}

bool find(Node* root, int key) {
	if(root == NULL) return 0;
	if(root->data == key) return 1;

	if(root->data > key) return find(root->left, key); // idhr return idhr hi kara h
	else return find(root->right, key);
}

Node* remove(Node* node, int data) {
	if(node == NULL) return NULL;

	if(data > node->data) {
		node->right = remove(node->right, data); // yaha return nhi kr rhe yaha pr bheja h left side peh
	} else if(data < node->data) {
		node->left = remove(node->left, data);
	} else {
		if(node->left != NULL and node->right != NULL) {
			int lmax = max(node->left);
			node->data = lmax;
			node->left = remove(node->left, lmax); // vapis call lgadi same case a nhi skta so todel ki idhr zarurt nhi
			return node;
		} else if (node->left != NULL and node->right == NULL) {
			Node* temp = node->left;	
			Node* todel = node;
			delete todel;
			return temp;
		} else if (node->right != NULL and node->left == NULL) {
			Node* temp = node->right;	
			Node* todel = node;
			delete todel;
			return temp;
		} else {
			Node* todel = node;
			delete todel;
			return NULL;
		}
	}

	return node; // optional coz if/else meh handle h coz kuch nhi hua toh no change so no return;
}

Node* constructBSTPreorder(int preorder[], int l, int r, int n) {
	static int idx = 0;

	if(idx >= n || preorder[idx] < l || preorder[idx] > r) return NULL;

	Node* node = new Node(preorder[idx++]);

	node->left = constructBSTPreorder(preorder, l, node->data, n);
	node->right = constructBSTPreorder(preorder, node->data, r, n);

	return node;
}

Node* constructBSTpreorder(int preorder[], int n) {
	int l = -1e9 - 1;
	int r = 1e9 + 1;

	return constructBSTPreorder(preorder, l, r, n);
}

bool isBST(Node* node, Node* &prev) {
	if(node == NULL) return 1;

	if(!isBST(node->left, prev)) return 0;

	if(prev != NULL && prev->data > node->data) return 0;
	prev = node;

	if(!isBST(node->right, prev)) return 0;

	return 1;
}

Node* constructBSTInorder(int inorder[], int l, int r, int n) {
	if(l > r) return NULL;

	int mid = (l + r) / 2;
	Node* node = new Node(inorder[mid]);

	node->left = constructBSTInorder(inorder, l, mid - 1, n);
	node->right = constructBSTInorder(inorder, mid + 1, r, n);

	return node;
}

Node* constructBSTinorder(int inorder[], int n) {
	int l = 0;
	int r = n - 1;

	return constructBSTInorder(inorder, l, r, n);
}

// idhr revision time in, post and level ka bhi dekhle BST ki construction ka

void printZigZag(Node* root) {
	if(root == NULL) return;

	stack<Node*> cur;
	stack<Node*> next;

	bool leftToRight = 1;

	cur.push(root);

	while(!cur.empty()) {
		Node* node = poop(cur);

		if(node != NULL) { 
			pr(node->data, " ");

			if(leftToRight) {
				if(node->left != NULL) next.push(node->left);
				if(node->right != NULL) next.push(node->right);
			} else {
				if(node->right != NULL) next.push(node->right);
				if(node->left != NULL) next.push(node->left);
			}
		}

		if(cur.empty()) {
			swap(cur, next);
			leftToRight = !leftToRight;	
		}
	}

}

int size(Node* node) {
	if(node == NULL) return 0;

	int ls = size(node->left);
	int rs = size(node->right);
	return ls + rs + 1;
}

int sum(Node* node) {
	if(node == NULL) return 0;

	int lsm = sum(node->left);
	int rsm = sum(node->right);
	return lsm + rsm + node->data;
}

// void largestBSTinBT(Node* node, int &mx) {
// 	if(node == NULL) return;

// 	Node* n = NULL;
// 	if(isBST(node, n)) {
// 		mx = max(size(node), mx);
// 		return;
// 	}

// 	largestBSTinBT(node->left, mx);
// 	largestBSTinBT(node->right, mx);
// }

struct Info {
	int size;
	int mx;
	int mn;
	int ans;
	bool isBST;
};

Info largestBSTinBT(Node* root) {
	if(root == NULL) {
		return {0, INT_MIN, INT_MAX, 0, true};
	}

	if(root->left == NULL and root->right == NULL) {
		return {1, root->data, root->data, 1, true};
	}

	Info l = largestBSTinBT(root->left);
	Info r = largestBSTinBT(root->right);

	Info cur;
	cur.size = 1 + l.size + r.size;
	
	if(l.isBST and r.isBST and root->data > l.mx and root->data < r.mn) {
		cur.mn = MIN(l.mn, r.mn, root->data);
		cur.mx = MIN(l.mx, r.mx, root->data);
		cur.ans = cur.size;
		cur.isBST = 1;

		return cur;
	}

	cur.ans = max(l.ans, r.ans);
	cur.isBST = 0;
	return cur;
}

void solve() {

	//  struct Node* root = new Node(1);
	//  root->left = new Node(2);
	//  root->right = new Node(3);
	//  root->left->left = new Node(4);
	//  root->left->right = new Node(5);
	//  root->right->left = new Node(6);
	//  root->right->right = new Node(7); 

	//  preorder(root);
	//  inorder(root);
	//  postorder(root);

	// int postorder[] = {4, 2, 5, 3, 1};
	// int inorder[] = {4, 2, 1, 5, 3};

	// Node* root = buildTree(postorder, inorder, 0, 4);
	// inorderPrint(root);

	//  levelOrder(root, 1);
	//  pr(sum(root));
	//  pr(max(root));
	//  pr(height(root));
	//  sumRep(root);
	//  pr(root->data);
	//  pr(isBal(root));

	//  int n1 = 7, n2 = 6;

	//  vi v;
	//  findPath(root, 7, v);
	//  pr(v);

	//  LCA(root, n1, n2);

	//  int sum = 0;
	//  pr(maxSumPath(root, sum));

	//// BST

	Node* root = new Node(50);
	insertBST(root, 25);
	insertBST(root, 75);
	insertBST(root, 12);
	insertBST(root, 37);
	insertBST(root, 62);
	insertBST(root, 87);
	// insertBST(root, 30);
	// insertBST(root, 40);
	// insertBST(root, 60);
	// insertBST(root, 77);

	// inorder(root);
	// pr(find(root, 66));

	//  Node* n = NULL;
	//  pr(isBST(root, n));

	 // int preorder[] = {30, 20, 10, 15, 25, 23, 39, 35, 42};
	 // Node* node = constructBSTpreorder(preorder, 9);
	 // inorder(node);

	//  struct Node* root = new Node(50);
	//  root->left = new Node(30);
	//  root->right = new Node(60);
	//  root->left->left = new Node(5);
	//  root->left->right = new Node(20);
	//  root->right->left = new Node(45);
	//  root->right->right = new Node(70); 
	//  root->right->right->left = new Node(65); 
	//  root->right->right->right = new Node(80); 
	
	//  int mx = INT_MIN;
	//  largestBSTinBT(root, mx);
	//  pr(mx);
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