#include <bits/stdc++.h>
using namespace std;

bool prime_checker(int n)
{
  if(n % 2 == 0 && n != 2)
  return false;
  
  int root = sqrt(n);
  
  for(int i = 3; i <= root; i += 2)
  {
    if(n % i == 0)
    return false;
  }
  
  return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    while(cin >> n)
    {
      if(n == 0)
      break;
      
      int cnt = 0;
      bool flag = prime_checker(n-2);
      
      if(flag)
      cnt++;
      
      for(int i = 3; i <= n/2; i+= 2)
      {
        int x = n - i;
        flag = prime_checker(x);
        if(flag)
        {
          flag = prime_checker(i);
          if(flag)
          {
            cnt++;
          }
        }
      }
      
      cout << cnt << "\n";
    }
    return 0;
}