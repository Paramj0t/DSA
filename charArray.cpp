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

void palindrome(char a[], int n) {
    int mid = n / 2, i = 0, j = n - 1;
    bool flag = false;
    while(i <= mid && j >= mid) {
       if(a[i] == a[j]) {
           flag = true;
       } else {
           flag = false;
           break;
       } 
       i++;
       j--;
    }
    if(flag) cout << "is palindrome" << endl;
    else cout << "not a palindrome";
}

void largestWord(char a[], int n) {
    int i = 0;
    int curL = 0, mx = 0, st = 0, en = 0;

    while (1)
    {
        if(a[i] == ' ' || a[i] == '\0') {
            if(curL > mx) {
                en = i - 1;
                st = i - curL;
            }
            mx = max(curL, mx);
            curL = 0;
        }
        else
        {
             curL++;
        }

        if(a[i] == '\0') break;
        i++;
    }
    cout << mx << endl;
    Fo(i, st, en + 1) cout << a[i];
    
}


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

   char array[3] = {'1','2', '\0'};
    char a[3] = "pa";
    const char* arr = "para";

    char b[3333] = "pa";
    int i = 0;
    while(b[i] != '\0') {
        // cout << a[i] << endl;
        i++;
    } 

    // char c[100];
    // cin >> c;
    // cout << c;
    // getline(cin, c); wrong
    // cout << c;

    //palindrome(a, 5);

    int n;
    cin >> n;
    cin.ignore();
    
    char arrr[n+1];
    cin.getline(arrr, n);
    cin.ignore();

    largestWord(arrr, n);

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