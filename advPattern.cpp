// #include <bits/stdc++.h>
#include <iostream> 

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // int n;
    // cin >> n;

    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n-i; j++) {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= 2*i - 1; j++)
    //     {
    //         cout << "* ";
    //     }
        
    //     cout << endl;
    // }
    // for(int i = n; i >= 1; i--) {
    //     for(int j = 1; j <= n-i; j++) {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= 2*i - 1; j++)
    //     {
    //         cout << "* ";
    //     }
        
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // int m = 1;
    // for(int i = 1; i <= n; i++) {
    //     if(i == 1) {
    //         for(int j = 1; j <= n-i; j++) {
    //             cout << "  ";
    //         }
    //         cout << "* ";

    //     } else {

    //         for(int j = 1; j <= n-i; j++) {
    //             cout << "  ";
    //         }
    //         cout << "* ";
    //         for (int j = 1; j <= m; j++)
    //         {
    //             cout << "  ";
    //         }
    //         cout << "* ";
    //         m += 2;
    //     }
    //     cout << endl;
    // }   

    // int n;
    // cin >> n;

    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n-i; j++) {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= 4; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;

    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n-i; j++) {
    //         cout << "  ";
    //     }
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     for(int j = 2; j <= i; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    int n; 
    cin >> n;

    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= n; j++) {
         if(((i+j)%4==0)||((i==2)&&(j%4==0))) {
             cout << "* ";
         } else
         {
             cout << "  ";
         }
        }
        cout << endl;
    }
         
    
    return 0;
}