#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    string s;
    
    while(getline(cin,s))
    {
      if(s == "DONE")
      break;
      string n = "";
      for(int i = 0; i < s.size(); i++)
      {
        if(isalpha(s[i]))
        {
        s[i]  = tolower(s[i]);
        n = n + s[i];
        }
        
      }
      
      string ans(n.rbegin(),n.rend());
      // cout << n << "\n" << ans << "\n";
      if(n == ans)
      cout << "You won't be eaten!\n";
      else
      cout << "Uh oh..\n";
    }
    return 0;
}