#include <bits/stdc++.h>
using namespace std;

 
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test;
    cin >> test;
    while(test--)
    {
      long long a,b,c;
      cin >> a >> b >> c;
      auto ans = [](long long a, long long b)
      {
        long long sum = a+b;
        return sum;
      };
      
      bool flag = false;
      if(ans(a,b) > c)
      {
        if((ans (b,c) > a))
        {
          if(ans(a,c) > b)
          flag = true;
        }
      }
      
      if(flag)
      cout << "OK\n";
      else
      cout << "WRONG!!\n";
      
    }
}