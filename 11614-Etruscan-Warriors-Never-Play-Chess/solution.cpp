#include <bits/stdc++.h>
using namespace std;


  
int main()
{
  int test;
  cin >> test;
  while(test--)
  {
    long long int a;
    cin >> a;
    long long int ans = 1 + (4*a*2);
    ans = sqrt(ans);
    ans = ans-1;
    ans  = ans/2;
    
    cout << ans << "\n";
  }
}