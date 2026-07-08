#include <bits/stdc++.h>
using namespace std;

bool sum(long long n)
{
  if(n < 10)
  n = n * n;
  while(n >= 10)
  {
    long long x = n;
    long long sum = 0;
    while(x)
    {
    long long rem = x % 10;
    sum += rem*rem;
    x/= 10;
    }
    n = sum;
  }
  
  if(n == 1)
  return true;
  else
  return false;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    
    int test;
    cin >> test;
    int cs = 1;
    while(test--)
    {
      long long n;
      cin >> n;
      bool flag = sum(n);
      
      if(flag)
      cout << "Case #" << cs++ << ": " << n << " is a Happy number." << "\n";
      else
      cout << "Case #" << cs++ << ": " << n << " is an Unhappy number." << "\n";
    }
    return 0;
}