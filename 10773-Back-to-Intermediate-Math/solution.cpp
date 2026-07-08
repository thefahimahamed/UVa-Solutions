#include <bits/stdc++.h>
using namespace std;




void solve()
{
  int test;
  cin >> test;
  int cs = 1;
  while(test--)
  {
    double d,v,u;
    cin >> d >> v >> u;
    
    if (u <= v || u == 0 || v == 0) 
    {
     printf("Case %d: can't determine\n", cs++);
     continue;
    }
    double short_time = (d / sqrt((u*u)-(v*v)));
    double short_len = (d / u);
    double dif = fabs(short_len-short_time);
    
    printf("Case %d: %.3lf\n",cs++,dif);
    
    
    
    
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}