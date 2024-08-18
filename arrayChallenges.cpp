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

void maxTillI(int a[], int n) {
    int maxNum = INT_MIN;
    fo(i, n) {
        maxNum = max(maxNum, a[i]);
    }
    pi(maxNum);
    cout << endl;
}

void sumOfAllSubArrays(int a[], int n) {
    int cur = 0;
    fo(i, n) {
        for(int j = i; j < n; j++) {
            cur += a[j];
            cout << cur << endl;
        }
        cur = 0;
    }
}

void apKickstart(int a[], int n) {
    int d = a[1] - a[0];
    int j = 2;
    int cur = 2;
    int ans = 0;
    while(j < n) {
        if(d == a[j] - a[j-1]) {
            cur++;
        } else {
            d = a[j] - a[j-1];
            cur = 2;
        }
        ans = max(cur, ans);
       j++; 
    }
    cout << ans << endl;
}

void recordBreakerkickstart(int a[], int n) {  
        int mx = -1;
        int ans = 0; 
        if(n == 1) {
            ans++;
        }
        fo(i, n) {
            if(a[i] > mx && a[i] > a[i+1]) {
                ans++;
            }
            mx = max(mx, a[i]);
        }
      
    cout << ans << endl;
}

void firstRepeatingElement(int a[], int n) {
    int N = 1e6 + 2; //10 ki power 6 and + 2

    int idx[N]; 
    fo(i, N) idx[i] = -1;
    int mn = INT_MAX;

    fo(i, n) {
        if(idx[a[i]] != -1) {
            mn = min(mn, idx[a[i]]);
        } else {
            idx[a[i]] = i;
        }
    } 
    pi(mn);
    cout << endl;
}

void sumSub(int a[], int n, int sum) {
    
    int st = 0, en = 0, curSum = 0;

    while(en < n && a[en] + curSum < sum) {
        curSum += a[en];
        en++;
    }

    if(curSum == sum) {
        cout << st << " " << en << endl;
        return;
    }

    while(en < n) {
        curSum += a[en];

        while(curSum > sum) {
           curSum -= a[st];
           st++;
        }

        if(curSum == sum) {
            cout << st << " " << en << endl;
        }
        en++;
    }

}

void smallestPosi(int a[], int n) {
    int N = 1e6 + 2;
    bool check[N];

    fo(i, n) {
        if(a[i] >= 0) 
           check[a[i]] = true;

    }
    fo(i, N) check[i] = 0; // = false

    fo(i, n) {
        if(check[i] != true) {
            cout << i << endl;
            break;
        }
    }
}

void printingSubArrays(int a[], int n) {
    fo(i, n) {
        fo(j, n) {
            Fo(k,i,j) {
                cout << a[k] << " ";
            } 
            cout << endl;
        }
    }
}

int maxSumSubarray(int a[], int n) { // kadane algo
    int curSum = 0;
    int maxSum = INT_MIN;

// for -ve values checking
    int mx = 0;
    bool flag = 0;
    fo(i, n) {
        if(a[i] > 0) {
            flag = 1;
            break;
        }
        mx = max(mx, a[i]);
    }
    if(!flag) return mx;


    fo(i, n) {
        curSum += a[i];
        if(curSum < 0) curSum = 0;
        maxSum = max(curSum, maxSum);
    }
    // cout << maxSum << endl;
    return maxSum;
}

void sumCircularSub(int a[], int n) {
    int wrapsum = 0;
    int nonwrapsum = 0;

    nonwrapsum = maxSumSubarray(a, n);

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum+=a[i];
        a[i] = -a[i];
    }

    wrapsum = sum + maxSumSubarray(a, n);
    cout << max(wrapsum, nonwrapsum) << endl; 
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int a[5] = {9,3, 2, 7, 5};
    // maxTillI(a, 6);
    // sumOfAllSubArrays(a, 6);
    // apKickstart(a, 6);
    // recordBreakerkickstart(a, 8);
    // firstRepeatingElement(a, 9);
    sumSub(a, 5, 5);
    // smallestPosi(a, 5);
    // printingSubArrays(a, 5);
    // sumCircularSub(a, 5);
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