#include <bits/stdc++.h>
using namespace std;

void binary(long long int n, stack < int > &st)
{
  while(n)
  {
    st.push(n%3);
    n/=3;
  }
}

int main ()
{
  long long int n;
  while(cin >> n && n >= 0)
  {
    if(n == 0)
    {
      cout << "0\n";
      continue;
    }
    stack < int > st;
    binary(n,st);
    while(!st.empty())
    {
     cout << st.top();
     st.pop();
    }
    cout << "\n";
    
    
    
    
    
  }
  
  
  
}