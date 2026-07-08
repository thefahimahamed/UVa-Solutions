#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        
        if (a == b && b == c && c == d) 
        {
            cout << "square\n";
        }
        
        else if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c)) 
        {
            cout << "rectangle\n";
        }
        
        else if ( (a+b+c > d) && (a+b+d > c) && (a+c+d > b) && (b+c+d > a) ) 
        {
           
        }
        else 
        {
            cout << "banana\n";
        }
    }

    return 0;
}