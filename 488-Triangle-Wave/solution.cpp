#include <bits/stdc++.h>
using namespace std;

void printer(pair<int ,int > &p)
{
  int i = 1;
  int n = 1;
  int x = 1;
  while(i <= n)
  {
    cout << n;
    if(x == n)
    {
    cout << "\n";
    n++;
    x = 1;
    
    }
    else
    x++;
    if(n>p.first)
    break;
  }
  
   i = 1;
   n = p.first-1;
   x = 1;
  while(i <= n)
  {
    cout << n;
    if(x == n)
    {
    cout << "\n";
    n--;
    x = 1;
    
    
    }
    else
    x++;
    if(n< 1)
    break;
  }

  
  
  
}


int main ()
{
  int test;
  cin >> test;
  while(test--)
  {
    pair < int , int > p;
    cin >> p.first >> p.second;
    for(int i = 1; i <= p.second; i++)
    {
    printer(p);
    if(i!=p.second)
    cout << "\n";
    }
    if(test != 0)
    cout << "\n";
  }
      
      
      
}