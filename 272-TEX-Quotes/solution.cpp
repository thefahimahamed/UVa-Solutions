#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag = 0;
    int space = 1;
   
    while(getline(cin,s))
    {
      
      for(long long int i = 0; i < s.size(); i++)
      {
        if(s[i] == 34 && flag == 0)
        {
          cout << "``";
          flag = 1;
        }
        else if(s[i] == 34 && flag == 1)
        {
          cout << "''";
          flag = 0;
        }
        else
        cout << s[i];
        
      }
      cout<< "\n";
      
    }
}