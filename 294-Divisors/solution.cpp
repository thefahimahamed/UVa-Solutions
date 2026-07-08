#include <bits/stdc++.h>
using namespace std;

int main(){
  
int test;
cin >> test;
while(test--)
{
  long long int l,u;
  cin >> l >> u;
  
  int max = -1;
  long long int v;
  
  for(long long int i = l; i <= u; i++)
  {
    int cnt = 0;
    for(long long int j = 1; j * j <= i; j++)
    {
      if(i % j == 0)
      {
      cnt++;
      if( j * j != i)
      cnt++;
      }
    }
    if(max < cnt)
    {
    max = cnt;
    v = i;
    }
  }
  
  cout << "Between "<< l << " and "<< u <<", " << v << " has a maximum of " << max <<" divisors.\n";
}
}