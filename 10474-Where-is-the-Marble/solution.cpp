#include <bits/stdc++.h>
using namespace std;


  
int main()
{
  int n,q;
  int cs = 1;
  
  while(cin >> n >> q)
  {
    if(n == 0 && q==0)
    break;
    
    multiset < int > s;
    for(int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      s.insert(x);
    }
    int i = 1;
    int temp = -1;
    map < int , int > m;
    for(auto it = s.begin(); it != s.end();it++)
    {
      if(temp != *it)
      m[*it] = i;
      i++;
      
      temp = *it;
    }
    cout << "CASE# " << cs++ << ":\n";
    for(i= 0; i < q; i++)
    {
      int x;
      cin >> x;
      
      if(m[x]==0)
      cout << x << " not found\n";
      else
      cout << x << " found at " << m[x] << "\n";
    }
    
  }
  
}
