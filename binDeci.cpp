// #include <bits/stdc++.h>
#include <iostream> 
#include <cmath> //optional for pow

using namespace std;


void rev(int n) {
    while(true) {
        cout << n % 10;
        n /= 10;
        if (!n)
        {
           break;
        }
        
    }
}

void ams(int n) {
    int temp = n;
    int sum = 0;
    while(true) {
        int digit = n % 10;
        n /= 10;
        sum += pow(digit, 3);
        // sum += digit * digit * digit;
        if(n == 0) break;
    }
    if(sum == temp) cout << "amstrong" << endl;
    else cout << "not amstrong" << endl;
    // cout << sum << endl;
}

void fibonacci(int n) {
    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for (int i = 0; i < 5; i++)
    {
        int temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
        
    }
    
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    // rev(10);
    // ams(153);
    // fibonacci(5);

    return 0;
}