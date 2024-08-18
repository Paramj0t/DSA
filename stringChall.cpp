#include <bits/stdc++.h>

using namespace std;

#define gc getchar_unlocked()
#define pc putchar_unlocked()
#define fo(i, n) for(int i = 0; i < n; i++)
#define foRev(i, n) for(int i = n - 1; i >= 0; i--)
#define Fo(i, k, n) for(int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ai(a, n) for(int i = 0; i < n; i++) { si(a[i]); }
#define vi(a, n) int input; for(int i = 0; i < n; i++) { a.push_back(si(input)); }
#define fofo(i, n, j, m) for(int i = 0; i < n; i++) { for(int j = 0; j < m; j++)
#define aiai(a, n, m) for(int i = 0; i < n; i++) { for(int j = 0; j < m; j++) { si(a[i][j]); } }
#define vivi(a, n, m) int input; for(int i = 0; i < n; i++) { for(int j = 0; j < m; j++) { a.push_back(a[i][j]); } }
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
#define sortalla(a) sort(all(a))
#define sortalld(a) sort(all(a), greater<int>());
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

void convertUp(string& s) {
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
}

void convertLow(string& s) {
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
}

void solve() {
    // string s = "paRAam";
    // convertUp(s);
    // pt(s);

    // string str = "par";

    // transform(all(str), str.begin(), ::toupper);
    // pt(s1);

    // string s = "12345";
    // sortalld(s);
    // int x = stoi(s);
    // pi(x);

    string s = "saklfjjghksbsfffff";

    int freq[26];
    memset(freq, 0, sizeof(freq));

    fo(i, s.length()) {
        freq[s[i] - 'a']++;
    }
    
    char c = 'a';
    int mx = -1;

    fo(i, 26) {
       if(mx < freq[i]) {
           mx = freq[i];
           c = i + 'a';
       }
    }
    pt(c);
}

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