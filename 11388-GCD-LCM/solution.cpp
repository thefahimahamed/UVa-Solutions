#include <bits/stdc++.h>
using namespace std;


long long gcd(long long a , long long b)
{
  if(b % a == 0)
  return a;
  
  
  return gcd(b % a, a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test;
    cin >> test;
    while(test--)
    {
      long long a,b;
      cin >> a >> b;
      long long ans = gcd(a,b);
      long long ans1 = (a*b)/ans;
      
      if(a == ans && b == ans1)
      cout << ans << " " << ans1 << "\n";
      else
      cout << "-1\n";
    }
    
    return 0;
}