#include <bits/stdc++.h>
using namespace std;




int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
    int finish = 1000000;
    vector < int > v(finish,0);
    for(int i = 0; i <= 9; i++)
    v[i] = i;
    for(int i = 0; i <= 100000; i += 10)
    {
      int n = i;
      int sum = 0;
      while(n)
      {
        sum += n % 10;
        n /= 10;
      }
      v[i] = sum;
    }
    int value;
    for(int i = 10; i <= 100000; i++)
    {
      if(i % 10 == 0)
      {
      value = v[i];
      value++;
      }
      else
      {
        v[i] = value++;
      }
    }
    
    
    
    int test;
    cin >> test;
    while(test--)
    {
      int n;
      cin >> n;
      int flag = 0;
      for(int i = 0; i < n; i++)
      {
        long long sum = v[i]+i;
        if(sum == n)
        {
          flag = i;
          break;
        }
      }
      
      cout << flag << endl;
      
    }
    
  
    
    
    
    return 0;
}
