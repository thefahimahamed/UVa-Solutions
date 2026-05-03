#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test;
    cin >> test;
    int cnt = 1;
    while(test--)
    {
      int n = 3;
      int mark[n];
      for(int i=0; i < n; i++)
      {
        cin >> mark[i];
      }
  
      if(mark[0] <= 20 && mark[1] <=20 && mark[2] <= 20)
      cout << "Case " << cnt++ << ": good\n";
      else
      cout << "Case " << cnt++ << ": bad\n";
    }
    return 0;
}