// #include <bits/stdc++.h>
#include <iostream> 

using namespace std;

void prime(int n) {
    bool isPrime = true;
    // i * i = n;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            cout << "not prime" << endl;
            isPrime = false;
            break;
        }
    }
    if(isPrime) {
        cout << "prime" << endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    prime(5);
    return 0;
}