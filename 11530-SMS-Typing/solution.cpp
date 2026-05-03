#include <bits/stdc++.h>
using namespace std;

  
int main() 
{
    int test;
    cin >> test;
    int cs = 1;
    cin.ignore();
    while(test--)
    {
      string s;
      getline(cin , s);
      int sum = 0;
      
      for(int i = 0; i < s.size(); i++)
      {
        char a = s[i];
        if(a >= 'a' && a <= 'c')
        sum += a - 96;
        else if(a >= 'd' && a <= 'f')
        sum += a - 'c';
        else if(a >= 'g' && a <= 'i')
        sum += a - 'f';
        else if(a >= 'j' && a <= 'l')
        sum += a - 'i';
        else if(a >= 'm' && a <= 'o')
        sum += a - 'l';
        else if(a >= 'p' && a <= 's')
        sum += a - 'o';
        else if(a >= 't' && a <= 'v')
        sum += a - 's';
        else if(a >= 'w' && a <= 'z')
        sum += a - 'v';
        else
        sum++;
      }
      
      cout << "Case #" << cs++ << ": " << sum << "\n";
    }
      
    return 0;
}