// #include <bits/stdc++.h>
#include <iostream> 

using namespace std;

void fxnEO(int n) {
    if(!(n % 2)) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

void maxThree(int a, int b, int c) {
    if(a > b) {
        if(a > c) {
            cout << "a" << endl;
        } else {
            cout << "c" << endl;
        }
    } else {
        if(b > c) {
            cout << "b" << endl;
        } else {
            cout << "c" << endl;
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    if(n > 10) {

    } else if(n == 10){

    } else {
        if(n) {

        } else {}
    }

    if(n % 2 == 0 && n % 3 == 0) {
        cout << "both" << endl;
    } else if(n % 2) {
        cout << "only 2" << endl;
    } else if(n % 3)
    {
        cout << "only 3" << endl;
    } else {
        cout << "kisi seh nhi" << endl;
    }
    

    return 0;
}