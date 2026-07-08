http://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2489
#include <bits/stdc++.h>
using namespace std;


int main() {
    int a, b, c, d;

    while (cin >> a >> b >> c >> d) {
        if(a==0)
        break;
        
        if (a == c && b == d) {
            printf("0\n");
        } else if (a == c || b == d || abs(a - c) == abs(b - d)) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }

    return 0;
}