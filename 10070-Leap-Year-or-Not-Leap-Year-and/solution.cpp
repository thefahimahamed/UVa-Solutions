#include <bits/stdc++.h>
using namespace std;

int checker(string &s,int x)
{
  int j = 0;
  int length = s.size();
  int a = 0;
  while(j < length)
  {
    a = a*10+ (s[j]-'0');
    if(a<x)
    j++;
    else
    {
      a = a%x;
      j++;
    }
  }
  return  a;
}

int main ()
{
  vector< string > str;
  string line;
  while (getline(cin, line)) 
    
    {
        str.push_back(line);
    }
    
    for(int  i = 0; i < str.size(); i++)
    
    {
    int leap = 0;
    int hulu = 0;
    int bulu = 0;
      int year = 400;
      int charsho = checker(str[i],year);
      year = 100;
      int eksho = checker(str[i],year);
      year = 4;
      int four = checker(str[i],year);
      year = 15;
      int ponero = checker(str[i],year);
      year = 55;
      int ponchanno = checker(str[i],year);
      
      if((four == 0 && eksho != 0) || (charsho == 0))
      leap = 1;
      if(ponchanno == 0)
      bulu =1;
      if(ponero == 0)
      hulu = 1;
      
      
    if(leap == 1)
    cout << "This is leap year.\n";
    if(hulu == 1)
    cout << "This is huluculu festival year.\n";
    if(bulu == 1 && leap == 1)
    cout << "This is bulukulu festival year.\n";
    
    if((bulu == 0 || bulu == 1) && hulu == 0 && leap == 0)
    cout << "This is an ordinary year.\n";
    if(i < str.size()-1)
    cout << "\n";
    
      
      
      
      
    }
}