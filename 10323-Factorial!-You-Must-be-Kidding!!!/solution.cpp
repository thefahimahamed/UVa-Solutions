#include <bits/stdc++.h>
using namespace std;
long long int fact;
void factorial(int n,long long int mul)
{
  
  if(n<1)
  {
    fact = mul;
    return;
  }
  else
  factorial(n-1,mul*n);
}

  
int main() 
{
  int n;
    while(cin >> n)
    {
      if(n>25)
      {
      cout << "Overflow!\n";
      continue;
      }
      if(n<-25)
      {
      cout << "Overflow!\n";
      continue;
      }
      
      fact = 1;
      factorial(n,fact);
      if(fact<10000)
      cout <<"Underflow!\n";
      else if(fact >6227020800)
      cout <<"Overflow!\n";
      else
      cout << fact << "\n";
      
    }
      
    return 0;
}