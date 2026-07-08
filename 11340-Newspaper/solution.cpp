#include <bits/stdc++.h>
using namespace std;
 


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    int test;
    cin >> test;
    while(test--)
    {
      int n;
      cin >> n;
      unordered_map < char , int > m;
      for(int i = 0; i < n; i++)
      {
        char ch; cin >> ch;
        int temp; cin >> temp;
        m[ch] = temp;
      }
      
      cin >> n;
      cin.ignore();
      long long sum = 0;
      while(n--)
      {
        string s;
        getline(cin , s);
        for(int i = 0; i < s.size(); i++)
        sum += m[s[i]];
        
      }
      double ans = sum/100.0;
      printf("%.2lf$\n",ans);
    }
    
    
    return 0;
}
