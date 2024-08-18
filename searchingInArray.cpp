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

int linearSearch(int a[], int key, int n) {

    bool keyFind = 0;
    fo(i, n) {
        if(a[i] == key) {
            keyFind = true;
            return i;
        } 
    }
    return -1;

}

// int binarySearch(int a[], int key, int n) {
//     int st = 0;
//     int en = n - 1; // array meh toh rhe

//     sort(a, a + n);
//     while(st <= en) { // agar mid - 1 and mid + 1 h toh st < "=====" en  = lagao
//         int mid = st + (en - st) / 2; // overflow seh bachao
//         if(key < a[mid]) {
//             en = mid - 1;
//         } else if(key == a[mid]) {
//             return mid;
//         } else {
//             st = mid + 1;
//         } 
//     }
//     return -1;
// }

void binarySearch(int a[], int key, int n) {
    int st = 0, en = n - 1;
    sort(a, a + n);

    while(en - st > 1) {
        int mid = st + (en - st) / 2;
        // int mid = st + (en - st) >> 1; // with help of bit manipulation.
        if(key > a[mid]) {
            st = mid + 1;
        } else {
            en = mid;
        }
    }

    if(a[st] == key) cout << st;
    else if(a[en] == key) cout << en;
    else cout << "Not found";
}

void lower_bound(int a[], int key, int n) {
    int st = 0, en = n - 1;
    sort(a, a + n);

    while(en - st > 1) {
        int mid = st + (en - st) / 2;
        if(key > a[mid]) {
            st = mid + 1;
        } else {
            en = mid;
        }
    }

    if(a[st] >= key) cout << st;
    else if(a[en] >= key) cout << en;
    else cout << "Not found"; 
}

void upper_bound(int a[], int key, int n) {
   int st = 0, en = n - 1;
    sort(a, a + n);

    while(en - st > 1) {
        int mid = st + (en - st) / 2;
        if(key >= a[mid]) {
            st = mid + 1;
        } else {
            en = mid;
        }
    }

    if(a[st] > key) cout << st;
    else if(a[en] > key) cout << en;
    else cout << "Not found";  
}

double mul(double mid, double n) {
    double ans = 1;
    for (int i = 0; i < n; ++i) {
        ans *= mid;
    }
    return ans;
}
void nthRoot(int x, int n) {
    double st = 1, en = x;
    double exp = 1e-6;

    while(en - st > exp) {
        double mid = st + (en - st) / 2;
        // if(mid * mid > x) { // for squar root
        if(mul(mid, n) > x) {
            en = mid;
        } else {
            st = mid;
        }
    }

    cout << setprecision(10) << st << " " << en << endl;

    cout << pow(x, 1.0 / 3);
}

int n;
long long m;
const int N = 1e6 + 10; // ek toh globally isliye kiya kyuki pass nhi krna padega fxn meh and dusra 1e6 h
long long trees[N];

bool isWoodSufficient(int h) {
    long long wood = 0;
    for(int i = 0; i < n; ++i) {
        if(trees[i] >= h) {
            wood += trees[i] - h;
        }
    }

    return wood >= m;
}

int main() {
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    //    #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    // int n, key;
    // si(n);
    // si(key);

    // int a[n];
    // fo(i, n) si(a[i]);

    // // pi(linearSearch(a, key, n));
    // pi(binarySearch(a, key, n));

    // int a[] = {1, 2, 2, 4, 6, 9};

    // binarySearch(a, 10, 5);
    // lower_bound(a, 2, 5);

    // nthRoot(2, 3);

    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        cin >> trees[i];
    }

    long long st = 0, en = 1e9;
    //T T T T F F F F F
    while(en - st > 1) {
       long long mid = st + (en - st) / 2;

        if(isWoodSufficient(mid)) { //T aya toh yeh and usse age
            st = mid;
        } else {
            en = mid - 1;
        }
    }
    if(isWoodSufficient(en)) cout << en;
    else cout << st;

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