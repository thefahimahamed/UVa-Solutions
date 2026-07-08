#include <bits/stdc++.h>
using namespace std;

void binary(long long int n, stack < int > &st)
{
  while(n)
  {
    st.push(n%2);
    n/=2;
  }
}

int main ()
{
  long long int n;
  while(cin >> n && n != 0)
  {
    stack < int > st;
    binary(n,st);
    int cnt = 0;
    cout << "The parity of ";
    while(!st.empty())
    {
      if(st.top() == 1)
      cnt++;
     cout << st.top();
     st.pop();
    }
    cout << " is " << cnt << " (mod 2).\n";
    
    
    
  }
  
  
  
}