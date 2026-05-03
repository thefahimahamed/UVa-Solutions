#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    string t;
    
    while(cin >> s && cin >> t)
    {
      int position = 0;
      int ans = 1;
      for(int i= 0; i < s.size(); i++)
      {
        int flag = 0;
        for(int j = position; j < t.size(); j++)
        {
          
          if(s[i] == t[j])
          {
          flag = 1;
          position = j+1;
          break;
          }
        }
        if(flag == 0)
          {
            ans = 0;
            break;
          }
      }
      
    if(ans)
    cout << "Yes\n";
    else
    cout << "No\n";
    }
      
      
}