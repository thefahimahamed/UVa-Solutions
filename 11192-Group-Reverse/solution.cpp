#include <bits/stdc++.h>
using namespace std;

void print(stack < char > &st)
{
  while(!st.empty())
  {
    cout << st.top();
    st.pop();
  }
}

int main ()
{
  long long int n;
  while(cin >> n && n != 0)
  {
    string s;
    cin >> s;
    n = s.size()/n;
    stack < char > st;
    int cnt = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
      st.push(s[i]);
      cnt++;
      if(cnt == n)
      {
      print(st);
      cnt = 0;
      }
    }
    cout << "\n";
    
    
  }
  
  
  
}