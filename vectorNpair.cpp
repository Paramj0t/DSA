#include <bits/stdc++.h>

using namespace std;

#define gc getchar_unlocked()
#define pc putchar_unlocked()
#define fo(i, n) for(int i = 0; i < n; i++)
#define Fo(i, k, n) for(int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ai(a, n) for(int i = 0; i < n; i++) { si(a[i]); }
#define ll long long
#define si(n)	scanf("%d", &n)
#define sl(n)	scanf("%lld", &n)
#define ss(s)	scanf("%s", s)
#define st(n)  cin >> n
#define st2(x, y) cin >> x >> y
#define pi(n)	printf("%d", n)
#define pl(n)	printf("%lld", n)
#define ps(s)	printf("%s", s)
#define pt(x) cout << x << endl
#define pt2(x, y) cout << x << ", " <<  y << endl
#define iso(n) n % 2 != 0
#define ise(n) n % 2 == 0
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define clr(a) memset(a, 0, sizeof(a))
#define sortall(a) sort(all(a))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define el(a) for(auto it: a)
#define qs(a) while(!a.empty())
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}
//=======================

//const int mod = 1;
//const int N = 1, M = 1;
//=======================

//vi g[N];
//int a[N];
//=======================

//int rev(int n);
//int mpow(int base, int exp);
//void ipgraph(int n, int m);
//void dfs(int u, int par);
//=======================

bool myCompare(pair<int, int> p1, pair<int, int> p2) {
    return p1.first < p2.first;
}

void solve() {

    vector<int> v; // can intiliaze directly but vs meh error dedeta h
    v.push_back(1);
    v.push_back(2);
    v.insert(v.begin()+1, 4);

    fo(i, v.size()) {
        pt(v[i]);
    }
    //take input in a vector WRONG WAY AISE NHI KRNA KABHI
    // int input;
    // while(si(input)) {
    //     v.push_back(input);
    // }
    
    // // vector<int>::iterator it;

    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     pt(*it);
    // }

    // for(auto element : v) {
    //     // pt(*element); wrong
    //     pt(element);
    // }

    // v.pop_back();

    // vector<int> v2(3, 50); // size 3 50 50 50 same element kelia

    // swap(v,v2); // vector swapping bhi allowed h

    // sort(v.begin(), v.end(), greater<int>()); // iterator hota h


    // pair is a stl container

    // pair<int, char> p;

    // p.first = 3;
    // p.second = 'a';

    //     int a[] = {10, 16, 7, 14, 5, 3, 12, 9};

    // vector< pair<int, int> > v3;
   
    // fo(i, sizeof(a) / sizeof(int)) {
    //     // pair<int, int> p;
    //     // p.first = a[i];
    //     // p.second = i;

    //     // v3.push_back(p);

    //     v3.push_back(make_pair(a[i], i));

    // }

    // sort(v3.begin(), v3.end(), myCompare);

    // fo(i, v3.size()) {
    //     a[v3[i].second] = i;
    // }    
    // fo(i, v3.size()) {
    //    pt(a[i]);
    // }    

}

// array of vectors of size 0

vector<int> a[10]; 

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin >> t;
    while(t--) {
        solve();
        cout << endl;
    }

    return 0;
}

//=======================

//int rev(int n) {
//	int ans = 0;
//	while(n) {
//		ans = ans*10 + n % 10;
//		n /= 10;
//	}
//	return ans;
//}

//int mpow(int base, int exp) {
//base %= mod;
//int result = 1;
//while (exp > 0) {
//if (exp & 1) result = ((ll)result * base) % mod;
//base = ((ll)base * base) % mod;
//exp >>= 1;
//}
//return result;
//}

//void ipgraph(int n, int m){
//int i, u, v;
//while(m--){
//cin>>u>>v;
//u--, v--;
//g[u].pb(v);
//g[v].pb(u);
//}
//}

//void dfs(int u, int par){
//for(int v:g[u]){
//if (v == par) continue;
//dfs(v, u);
//}
//}