#include <bits/stdc++.h>
using namespace std;

int main() {
    long double a, n;
    while(cin >> a >> n) {
        
        long double theta = 2.0L * M_PI / n;

       
        long double b = sqrtl(2.0L * a * a * (1.0L - cosl(theta)));

        
        long double s = (a + a + b) / 2.0L;

        
        long double area = sqrtl(s * (s - a) * (s - a) * (s - b));

       
        cout << fixed << setprecision(3) << area * n << "\n";
    }
    return 0;
}