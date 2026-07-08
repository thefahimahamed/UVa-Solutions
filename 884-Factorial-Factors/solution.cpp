#include <bits/stdc++.h>
using namespace std;





void solve()
{
  vector < long long > prime(1000000+1);
  vector < long long > spf(1000000+1);
  
  for(int i = 2; i <= 1000000; i++)
  prime[i] = 1;
  
  for(int i = 2; i * i <= 1000000; i++)
  {
    if(prime[i] == 1)
    {
      for(int j = i * i; j <= 1000000; j += i)
      prime[j] = 0;
    }
  }
  
  for(int i = 2; i <= 1000000; i++)
  spf[i] = i;
  
  for(int i = 2; i * i <= 1000000; i++)
  {
    if(spf[i] == i)
    {
      for(int j = i * i; j <= 1000000; j += i)
      {
        if(spf[j] == j)
        spf[j] = i;
      }
    }
  }
  
  vector < long long > v;
  v.push_back(0);
  v.push_back(0);
  
  for(int i = 2; i <=  1000000; i++)
  {
    int temp = i;
    int cnt = 0;
    while(temp != 1)
    {
      cnt++;
      temp = temp/spf[temp];
    }
    v.push_back(cnt);
  }
  
  vector < long long > sum;
  sum.push_back(0);
  sum.push_back(0);
  long long s = 0;
  for(int i = 2; i <= 1000000; i++)
  {
  s += v[i];
  sum.push_back(s);
  }
  
  
  
  long long n;
  while(cin >> n)
  {
    cout << sum[n] << "\n";
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}