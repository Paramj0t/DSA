// #include <bits/stdc++.h>
#include <iostream> 

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Hello" << endl;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    for (int i = 1; i <= n; cout << i++ << endl) // condition kuch bhi likh skte h
    {
        sum += i;
    }
    

    while(true) {}

    

    // do{

    // //  } while(!5) //!anything == 0
    // {
    //     /* code */
    // }
    
    
    return 0;
}