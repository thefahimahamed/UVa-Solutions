#include <bits/stdc++.h>
using namespace std;
int main()
{
  
  long long int a, b;
  while(cin >> a >> b && a!= 0 && b!=0)
  {
  if (a > b) 
  swap(a, b);
  int m = a;
  int n = b;
  int mx = -1;
  int big;
  while(a <= b)
  {
  long long int temp = a;
  int cnt = 0;
  while(temp > 1)
  {
  cnt++;
  if(temp % 2 == 0)
  {
   temp/=2; 
   continue;
  }
  if(temp % 2 != 0)
  {
    temp = (3*temp)+1;
    continue;
  }
  }
  if(mx < cnt)
  {
  if(a == 1)
  {
    mx = 3;
    big = 1;
  }
  else
  {
  mx = cnt;
  big = a;
  }
  }
  a++;
  }
  
  cout  << "Between " << m << " and " << n  << ", " << big << " generates the longest sequence of " << mx << " values.\n";
  }
  
}