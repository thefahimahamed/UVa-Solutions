#include <bits/stdc++.h>
using namespace std;


  
int main()
{
  string s;
  while(cin >> s)
  {
    
    if(s == "0")
    break;
    
    int len = s.size();
    int rev = len;
    long long int sum = 0;
    map < long long int , long long int > m;
    for (int i = 0; i < len; i++)
    {
      int temp = s[i]-48;
      m[rev] = temp;
      rev--;
    }
    
    for (int it = len; it > 0 ; it--)
    {
       long long int temp = pow(2,it);
       temp -= 1;
       temp = temp * m[it];
       sum += temp;
    }
    
    cout << sum << "\n";
    
    
    
    
  }
  
}