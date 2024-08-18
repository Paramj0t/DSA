// #include <bits/stdc++.h>
#include <iostream> 

using namespace std;

int rev(int n) {
    int ans = 0;
    while(n) {
        ans = ans*10 + n % 10;
        n /= 10;
    }
    return ans;
}

void print(int n) {
    // cout << n << endl;
    cout << n << " ";
}

int fac(int n) {
    int f = 1;
    for (int i = n; i >= 1; i--)
    {
        f *= i;
    }
    // print(f);
    return f;
    
}

int ncr(int n, int r) {
    int a = fac(n);
    int b = fac(r);
    int c = fac(n-r);
    int d = b * c;
    int e = a / d;
    print(e);
    return e;
}

int pasTri(int n) {
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++) {
            ncr(i, j);
        }
        cout << endl;
    }
    
}

int main(){
     #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cout << rev(123) << endl;
    // fac(4);
    // ncr(4, 2);
    // pasTri(5);


    return 0;
}