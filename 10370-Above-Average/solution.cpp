#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test;
    cin >> test;
    while(test--)
    {
      int n;
      cin >> n;
      double mark[n];
      for(int i=0; i < n; i++)
      {
        cin >> mark[i];
      }
      double sum = 0;
      for(int i=0; i < n; i++)
      {
        sum+= mark[i];
      }
      double avg = sum/n;
      double cnt = 0;
      for(int i=0; i < n; i++)
      {
        if(mark[i]> avg)
        cnt++;
      }
      
      double ans = (100.0/n)*cnt;
      cout << fixed << setprecision(3) << ans << "%\n";
      
    }
    return 0;
}