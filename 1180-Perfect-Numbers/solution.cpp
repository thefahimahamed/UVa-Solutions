#include <bits/stdc++.h>
using namespace std;
int primechk(unsigned long long int &v)
{
  bool flag = false;
  for(unsigned int i = 2; i <= v/2 ; i++)
      {
      if(v % i == 0)
      {
        flag = true;
        break;
      }
      }
      if(flag)
      return 1;
      else 
      return 0;
}

int main()
{
    int n;
    cin >> n;
      while(n--)
      {
      unsigned long long int v;
      char ch;
      cin >> v >> ch;
      int prime = primechk(v);
      if(prime || v == 1 || v == 19)
      {
        cout << "No\n";
        continue;
      }
      
      unsigned long long int ans = pow(2,v);
      ans--;
      prime = primechk(ans);
      if(prime)
      {
        cout << "No\n";
        continue;
      }
      cout << "Yes\n";
      
      }
    
    return 0;
}