#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    int test; cin >> test;
    int cs = 1;
    while(test--)
    {
      int cday,cmonth,cyear;
      int bday,bmonth,byear;
      char s1,s2;
      int ans;
      cin >> cday >> s1 >> cmonth >> s2 >> cyear;
      cin.ignore();
      cin >> bday >> s1 >> bmonth >> s2 >> byear;
      cin.ignore();
      
      if(cyear > byear)
      {
        if(cmonth > bmonth)
        ans = cyear - byear;
        else if(cmonth == bmonth)
        {
          if(cday >= bday)
          ans = cyear - byear;
          else
          ans = cyear-byear-1;
        }
        else
        ans = cyear-byear-1;
      }
      
      else if(cyear == byear)
      {
        if(cmonth > bmonth)
        ans = cyear - byear;
        else if(cmonth == bmonth)
        {
          if(cday >= bday)
          ans = cyear - byear;
          else
          ans = -100;
        }
        else
        ans = -100;
      }
      
      else
      ans = -100;
      
      if(ans > 130)
        cout << "Case #" << cs++ << ": Check birth date\n";
        else if(ans < 0)
        cout << "Case #" << cs++ << ": Invalid birth date\n";
        else
        cout << "Case #" << cs++ << ": " << ans << "\n";
      
    }
    return 0;
}