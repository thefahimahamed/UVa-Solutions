#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    while(cin >> test)
    {
      
    if(test == 0)
    break;
    map < int , char > m;
    while(test--)
    {
    int gr_cnt = 0;
    int wh_cnt = 0;
    char ch = 'A';
    for(int i = 0; i < 5; i++)
    {
      int x;
      cin >> x;
      
      if(x>127)
      x = 255;
      if(x < 128)
      x = 0;
      
      if(x == 0)
       gr_cnt++;
       
      if(x == 255)
       wh_cnt++;
      
      
      m[x] = ch++;
      
      
    }
    if(gr_cnt > 1 || wh_cnt == 5)
    cout << "*\n";
    else
    cout <<  m[0] << "\n";
    }
    }
    return 0;
}