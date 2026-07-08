#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
  int n,k;
  cin >> n >> k;
  if(k == 1)
  {
    cout << "0\n";
    return;
  }
  
  vector < int > v;
  long long sum = 0;
  for(int i = 2; i * i <= n; i++)
  {
   if(n % i == 0)
   {
     v.push_back(i);
     if(n/i != i)
     v.push_back(n/i);
   }
  }
  v.push_back(n);
  
  
  
  for(int i = 0; i < v.size(); i++)
  {
    if(v[i] % k != 0)
    sum += v[i];
  }
  
  cout << sum+1 << "\n";
    
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test; cin >> test;
    while(test--)
    solve();
    
    
    
    
    return 0;
}
