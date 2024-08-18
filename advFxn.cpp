#include <bits/stdc++.h>
// #include <iostream> 

using namespace std;

void pytha(int a, int b, int c) {
    int d = max(a,max(b,c));

    if(a == d) {
        int e = pow(b, 2) + pow(c, 2);
        if(pow(a, 2) == e) cout << "true" << endl;
        else cout << "false" << endl;
    } else if(b == d) {
        int e = pow(a, 2) + pow(c, 2);
        if(pow(b, 2) == e) cout << "true" << endl;
        else cout << "false" << endl;
    } else if(c == d) {
        int e = pow(a, 2) + pow(b, 2);
        if(pow(c, 2) == e) cout << "true" << endl;
        else cout << "false" << endl;
    }

}

int binaryToDeci(int n) {
    int ans = 0;
    int i = 0;
    while(true) {
        ans += (n % 10) * pow(2,i);
        i++;
        n /= 10;
        if(n==0) break;
    }
    return ans;
}

int octalToDeci(int n) {
    int ans = 0;
    int i = 0;
    while(true) {
        ans += (n % 10) * pow(8,i);
        i++;
        n /= 10;
        if(n==0) break;
    }
    return ans;
}

int hexaToDeci(string n) {

    int ans = 0;
    for(int i = 0; i <= n.size() - 1; i++) {
        if(n[i] >= '0' && n[i] <= '9') {
            ans += (n[i] - '0') * pow(16, n.size() - 1 - i);
        } else if(n[i] >= 'A' && n[i] <= 'F') {
            ans += (n[i] - 'A' + 10) * pow(16, n.size() - 1 - i);
        }
    }
    return ans;
}

int deciToBinary(int n) {
     int ans = 0;
    int i = 0;
    while(true) {
        ans += (n % 2) * pow(10, i);
        i++;
        n /= 2;
        if(n==0) break;
    }
    return ans;
}

int deciToOctal(int n) {
    int ans = 0;
    int i = 0;
    while(true) {
        ans += (n % 8) * pow(10, i);
        i++;
        n /= 8;
        if(n==0) break;
    }
    return ans;
}

string deciToHexa(int n) {
    string ans = "";
    // int i = 0;
    while(true) {
        if(n % 16 <= 9) {
            ans = ans.append(to_string((n % 16)));
            n /= 16;
          if(n == 0) break;
        } else {
            if(n % 16 == 10) {
                ans = ans.append("A");

            } else if(n % 16 == 11) {
                ans = ans.append("B");
                n /= 16;
                if(n == 0) break;
            } else if(n % 16 == 12) {
                ans = ans.append("C");
                n /= 16;
                if(n == 0) break;
            } else if(n % 16 == 13) {
                ans = ans.append("D");
                n /= 16;
                if(n == 0) break;
            } else if(n % 16 == 14) {
                ans = ans.append("E");
                n /= 16;
                if(n == 0) break;
            } else if(n % 16 == 15) {
                ans = ans.append("F");
                n /= 16;
                if(n == 0) break;
            }
            
        }

    }
    reverse(ans.begin(), ans.end());
    return ans;
}

string addBi(int a, int b) {
    string ans = "";
    int carry = 0;

    while(a != 0 && b != 0) {
        if(a % 10 == 0 && b % 10 == 0) {
            ans = ans.append(to_string(0 + carry));
            a /= 10;
            b /= 10;
        } else if((a % 10 == 1 && b % 10 == 0) || (a % 10 == 0 && b % 10 == 1)) {
            if(carry == 1) {
                ans = ans.append(to_string(0));
                a /= 10;
                b /= 10;           
            } else {
                ans = ans.append(to_string(1));
                a /= 10;
                b /= 10; 
            }
        } else if(a % 10 == 1 && b % 10 == 1) {
            if(carry == 1) {
                ans = ans.append(to_string(1));
                a /= 10;
                b /= 10;
                carry = 1;
            } else {
                ans = ans.append(to_string(0));
                a /= 10;
                b /= 10;
                carry = 1;
            }
        }
    }
    ans = ans.append(to_string(carry));
    reverse(ans.begin(), ans.end());
    return ans;
}

// Decimal to any base

    int deciToAnyBase(int n, int b) {
        int ans = 0, i = 0;

        while(n) {
            ans += (n % b) * (pow(10, i));
            i++;
            n /= b;
        }

        return ans;
    }

// Any base to Deci

    int anyBaseToDeci(int n, int b) {
        int ans = 0, i = 0;

        while(n) {
            ans += (n % 10) * (pow(b, i));
            i++;
            n /= 10;
        }

        return ans;
    }

// Any to any base --> any to deci jao phir deci to any chale jao ... via DECI hai


// Any base addition

    int anyBaseAdd(int n1, int n2, int b){
        int c = 0, ans = 0, i = 0;

        while(n1 > 0 || n2 > 0 || c > 0) {
            int d1 = n1 % 10;
            n1 /= 10;
            int d2 = n2 % 10;
            n2 /= 10;

	    int d = d1 + d2 + c;
            c = d / b;
            d = d % b;

            ans += d * pow(10, i);
	        i++;
	}

	return ans;
    }

// Any base subtraction

    int anyBaseSub(int n1, int n2, int b) {
        int borrow = 0, ans = 0, i = 0;

        while(n2 > 0) {
            int d1 = n1 % 10;
            n1 /= 10;
            int d2 = n2 % 10;
            n2 /= 10;

            int d = 0;
            d2 += borrow;

            if(d2 > d1) {
                borrow = 0;
                d = d2 - d1;
            } else {
                borrow = -1;
                d = d2 + b - d1;
            }

            ans += d * pow(10, i);
	        i++;
        }

        return ans;
    }

// Any base multiplication 

    int anyBaseMul(int n1, int n2, int b) {
        int ans = 0, p = 1;

        while(n2 > 0) {
            int d2 = n2 % 10;
            n2 /= 10;

            int sprd = singleProduct(n1, d2, b);

            ans = anyBaseAdd(sprd * p, ans, b);
            p *= 10;
        }
        
        return ans;
        
    }

    int singleProduct(int n1, int d2, int b) {
        int c = 0, ans = 0, i = 0;

        while(c > 0 || n1 > 0) {
            int d1 = n1 % 10;
            n /= 10;

            int d = d1 * d2 + c;

            c = d / b;
            d %= b;

            ans += d * pow(10, i);
            i++;
        }

        return ans;
    }


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // int a, b, c;
    // cin >> a >> b >> c;
    // pytha(a, b, c);

    // int n;
    // cin >> n;
    // cout << binaryToDeci(n) << endl;
    // cout << octalToDeci(n) << endl;

    // string n;
    // cin >> n;
    // cout << hexaToDeci(n) << endl;

    // int n;
    // cin >> n;
    // cout << deciToBinary(n) << endl;

    // int n;
    // cin >> n;
    // cout << deciToOctal(n) << endl;

    // int n;
    // cin >> n;
    // cout << deciToHexa(n) << endl;

    int a, b;
    cin >> a >> b;
    cout << addBi(a, b) << endl;

    return 0;
}