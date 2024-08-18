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

class node {
    public:
        int data;
        node* next;

        node(int val) {
            data = val;
            next = NULL; // by default next null h
        }
};

void insertAtTail(node* &head, int val) {
    node* n = new node(val); // constructor

    if(head == NULL) {
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = n;
}

void display(node* &head) {
    node* temp = head;
    while(temp != NULL) {
        pr(temp->data, " ");
        temp = temp->next;
    }
    pr("NULL");
}

void insertAtHead(node* &head, int val) {
    node* n = new node(val);

    if(head == NULL) {
        head = n;
        return;
    }

    n->next = head;
    head = n;
}

bool search(node* head, int key) {
    if(head == NULL) return 0;

    while(head != NULL) {
        if(head->data == key) return 1;
        head = head->next;
    }
    return 0;
}

//if you wanna del head
void deleteAtHead(node* &head) {
    node* todel = head;
    head = head->next;
    delete todel;
}
//head nhi del krna toh deletion fxn head krna toh deleteAtHead
void deletion(node* &head, int val) {
    if(head == NULL) return;

    if(head->next == NULL) {
        deleteAtHead(head);
        return;
    }

    node* temp = head;

    while(temp->next->data != val) {
        temp = temp->next;
    }

    node *todel = temp->next;
    temp->next = temp->next->next; 
    delete todel;
}

node* reverse(node* &head) {
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr != NULL) {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

node* reverseRec(node* &head) {
    if(head == NULL && head->next == NULL) return head;

    node* newsetPhead = reverseRec(head->next);
    head->next->next = head;
    head->next = NULL;
}

node* reversek(node* &head, int k) {
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count = 0;

    while (currptr != NULL && count < k) {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr != NULL) {
       head->next = reversek(nextptr, k);
    }

    return prevptr;
}

void makeCycle(node* &head, int pos) {
    node* temp = head;
    node* startNode;

    int count = 1;
    while(temp->next != NULL) {

        if(pos == count) {
            startNode = temp;
        }

        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

bool detectCycle(node* &head) {
    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head) {
    node* slow = head;
    node* fast = head;

   do {
        slow = slow->next;
        fast = fast->next->next
    } while (slow != fast);

    fast = head;

    while(slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
}

class node {
    public:
        int data;
        node* next;
        node* prev;
        node(int val) {
            data = val;
            next = NULL;
            prev = NULL;
        }
};

void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    if(head != NULL) head->prev = n;
    head = n;
}

void insertAtTail(node* head, int val) {

    if(head == NULL) {
        insertAtHead(head, val);
        return;
    }
    node* n = new node(val);
    node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void deleteAtHead(node& *head) {
    node* temp = head;
    head = head->next;
    head->prev = NULL;

    delete temp;
}

void deletion(node* &head, int pos) {
    if(pos == 1) {
        deleteAtHead(head);
    }
    node* temp = head;
    int count = 1;
    while(count != pos && temp != NULL) {
        temp = temp->next;
        count++;
    }

    node* todel = temp;    // directly bhi temp ko del kr skta tha
    if(temp->prev != NULL) temp->prev->next = temp->next;
    if(temp->next != NULL) temp->next->prev = temp->prev;
    delete todel;
}

// Q append k ...

int length(node* head) {
    int l = 0;
    node* temp = head;

    while(temp != NULL) {
        l++;
        temp = temp->next;
    }
    return l;
}

node* kappend(node* &head, int k) {
   node* newHead;
   node* newTail;
   node* tail = head;

   k %= l;
   int l = length(head);
   int count = 1;

   while(tail->next != NULL) {
       if(count == l - k) newTail = tail;
       else if(count == l - k + 1) newHead = tail;
       tail = tail->next;
       count++;
   }

   newTail->next = NULL;
   tail->next = head;
   head = newHead;

   return newHead; //head
}

//Q find intersection point ...

int intersection(node* &head1, node* &head2) {

    int l1 = length(head1);
    int l2 = length(head2);

    int count = 1;
    int d = 0;
    node* ptr1; //bade kelia
    node* ptr2;

    if(l1 > l2) {
        d = l1 - l2 + 1;
        ptr1 = head1;
        ptr2 = head2;
    } else {
        d = l2 - l1 + 1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while(count != d) {
        if(ptr1 == NULL) return -1;
        ptr1 = ptr1->next;
        count++;
    }

    while(ptr1 != ptr2) {
        if(ptr1 == NULL || ptr2 == NULL) return -1;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        count++;
    }

    // whilt(ptr1 != NULL && ptr2 != NULL) {
    //     if(ptr1 == ptr2) {
    //         return ptr1->data;
    //     }

    //     ptr1 = ptr1->next;
    //     ptr2 = ptr2->next;r
    // }
    // return -1;

    return ++count;
}

// Q merge 2 sorted LL

node* merge(node* &head1, node* &head2) {
    node* p1 = head1; // yeh ptr h
    node* p2 = head2; // yeh bhi ptr h
    node* dummyNode = new node(-1); // but yeh node h
    node* p3 = dummyNode; // yeh ptr h

    while(p1 != NULL && p2 != NULL) {
        if(p1->data < p2->data) {
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        } else {
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }
    }

    if(p1 != NULL) {
        while(p1 != NULL) {
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
    } else {
        while(p2 != NULL) {
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }
    }

    return dummyNode->next;
}

node* mergeRec(node* &head1, node* &head2) {

    if(head1 == NULL) {
        return head2;
    } else if(head2 == NULL) {
        return head1;
    }

    node* result;
    
    if(head1->data < head2->data) {
        result = head1;
        result->next = mergeRec(head1->next, head2);
    } else {
        result = head2;
        result->next = mergeRec(head1, head2->next);
    }
}

class node {
    public:
        int data;
        node* next;

        node(int val) {
            data = val;
            next = NULL;
        }
};

void insertAtHead(node* &head, int val) {
    if(head == NULL) {
        node* n = new node(val);
        n->next = n;
        head = n;
        return;
    }
    node* n = new node(val);
    node* temp = head;

    while(temp->next != head) {
        temp = temp->next;
    } 

    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val) {

    if(head == NULL) {
        insertAtHead(head, val);
        return;
    }
    node* n = new node(val);
    node* temp = head;

    while(temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deleteAtHead(node* &head) {
    node* temp = head;


    while(temp->next != head) {
        temp = temp->next;
    }

    node* todel = head;
    temp->next = head->next;
    head = head->next;
    delete todel;
}

void deletion(node* &head, int pos) {
    if(pos == 1) {
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int count = 1;

    while(count != pos - 1) {
        temp = temp->next;
        count++;
    }

    node* todel = temp->next;
    temp->next = temp->next->next;
    delete todel;
}

// Q Put Even after odd ...

void evenAfterOdd(node* &head) {
    node* odd = head;
    node* even = head->next;
    node* evenStart = even;

    while(odd->next != NULL && even->next != NULL) {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    if(odd->next == NULL) {
        even->next = NULL;
    }
    odd->next = evenStart;
    
}

void solve() {
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 0);
    display(head);
    // pr(search(head, 6));
    // deletion(head, 1); // normal del kelia yeh head ke alva
    // deleteAtHead(head, 0); // head krne kelia yeh
    // display(head);
    // node* newhead = reverse(head);
    // display(newhead);
    // node* newhead = reverseRec(head);
    // display(newhead);
    // int k = 2;
    // node* newhead = reversek(head, k);
    // display(newhead);
    // makeCycle(head, 3);
    // pr(detectCycle(head));;
    // removeCycle(head);
    // pr(detectCycle(head));


    
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