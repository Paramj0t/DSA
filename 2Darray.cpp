#include <bits/stdc++.h>

using namespace std;

#define gc getchar_unlocked()
#define pc putchar_unlocked()
#define fo(i, n) for(int i = 0; i < n; i++)
#define Fo(i, k, n) for(int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(n)	scanf("%d", &n)
#define sl(n)	scanf("%lld", &n)
#define ss(s)	scanf("%s", s)
#define pi(n)	printf("%d", n)
#define pl(n)	printf("%lld", n)
#define ps(s)	printf("%s", s)
#define deb(x) cout << x << endl
#define deb2(x, y) cout << x << ", " <<  y << endl
#define pb push_back
//#define mp make_pair
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define clr(a) memset(a, 0, sizeof(a))
#define sortall(a) sort(all(a))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define el(a) for(auto it: a)
#define qs(a) while(!a.empty())
#define PI 3.1415926535897932384626
//typedef pair<int, int>	pii;
//typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
//typedef vector<pii>		vpii;
//typedef vector<pl>		vpl;
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

void spiralOrderMatrix(int a[3][4]) {
    int rowS = 0, rowE = 2, colS = 0, colE = 3;

    while (rowS <= rowE && colS <= colE)
    {
        Fo(i, colS, colE) {
            cout << a[rowS][i] << " ";
        }
        rowS++;
        Fo(i, rowS, rowE) {
            cout << a[i][colE] << " ";
        }
        colE--;
        for(int i = colE; i >= colS; colE--) {
            cout << a[rowE][i];
        }
        rowE--;
        for(int i = rowE; i >= rowS; rowE--) {
            cout << a[i][colS];
        }
        colS++;
    }
    
    
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int n, m;
    cin >> n >> m;

    int a[n][m];
    float b[n][m];

    fo(i,n) {
        fo(j,m) {
            cin >> a[i][j];
        }
    }
    
    fo(i, n) {
        fo(j, m) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    if(a[1][2] == 5) {
        cout << "t";
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