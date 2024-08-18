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


// array always by ref jate h

// void passbyreff(int a[]) {
//     a[0] = 1;
// }

const int n = 1e7;
int a[n];

int main() {
    //     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    //    #ifndef ONLINE_JUDGE
    //         freopen("input.txt", "r", stdin);
    //         freopen("output.txt", "w", stdout);
    //     #endif

    // int arr[4] = {1,2,3,4};

    // fo(i,4) {
    //     si(arr[i]);
    // }

    // pi(arr[3]);
    // cout << endl;

    // int n;
    // si(n);
    // int a[n];
    // int maxNum = INT_MIN;
    // for(int i = 0; i < n; i++) {
    //     cin >> a[i];
    //     if(a[i] > maxNum) {
    //         maxNum = a[i];
    //     }
    // }
    // fo(i, n) {
        // si(a[i]);
        // maxNum = max(maxNum, a[i]);
    // }

// pi(maxNum);

    // int arr[] = {2, 3};
    // passbyreff(arr);
    // cout << arr[0];

    // int n = 1e7; // 1e5 tk and otherwise com to computer depend krta h
    // int arr[n];
    // arr[0] = 1;
    // return 0;
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