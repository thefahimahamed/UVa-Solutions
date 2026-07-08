#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    while(1)
    {
        long long a,b,c,d,l; cin >> a >> b >> c >> d >> l;
        if(a == 0 && a == b && b == c && c == d && d == l)
        break;
        int cnt = 0;
        for(long long i = 0; i <= l; i++)
        {
            long long temp = (a*i*i) + (b*i) + c;
            if(temp % d == 0)
            cnt++;
        }
        cout << cnt << endl;
    }

}