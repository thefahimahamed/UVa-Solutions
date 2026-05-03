#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    while(getline(cin,s))
    {
      int i;
      long long int sum = 0;
      bool flag = true;
      for(i = 0; i < s.size(); i++)
      {
        s[i] = tolower(s[i]);
        sum+= (s[i] - 'a');
      }
      cout << sum;
      for(i = 2 ; i < sum; i++)
      {
        if(sum%i == 0)
        flag = false;
      }
      if(flag)
      cout << "It is a prime word.\n";
      else
      cout << "It is not a prime word.\n";
  
      
    }
    return 0;
}