#include <bits/stdc++.h>
using namespace std;
 
 
long long solve(long long b, long long p, long long m)
{
  if(p == 0)
  return 1;
  
  if(p&1)
  {
    long long res = solve(b,p/2,m);
    return (b*((res*res)%m)%m);
  }
  else
  {
    long long res = solve(b,p/2,m);
    return (res*res)%m;
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long b, p, m;
    while(cin >> b >> p >> m)
    {
    long long ans = solve(b,p,m);
    
    cout << ans << "\n";
    }
    
    
    return 0;
}