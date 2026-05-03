#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int cnt = 1;
    while(1)
    {
      int n;
      cin >> n;
      if(n==0)
      break;
      int mark[n];
      for(int i=0; i < n; i++)
      {
        cin >> mark[i];
      }
      int zero = 0;
      int number = 0;
      for(int i = 0; i < n; i++)
      {
        if(mark[i]==0)
        zero++;
        else
        number++;
      }
      cout << "Case " << cnt++ << ": " << number-zero << "\n";
      
    }
}