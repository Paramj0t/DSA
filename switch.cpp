// #include <bits/stdc++.h>
#include <iostream> 

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    char a;
    cin >> a;
    int b, c;
    cin >> b >> c;

    switch (a)
    {
    case '+':
        // int sum = b + c; // cant do this
        // int sum;
        // sum = b + c; // can do this
        cout << b + c << endl;
        break;
    case '-':
        cout << b - c << endl;
        break;
    case '*':
        cout << b * c << endl;
        break;
    case '/':
        cout << b / c << endl;
        break;
    default:
        cout << "hum pgl h";
        break;
    }

    return 0;
}