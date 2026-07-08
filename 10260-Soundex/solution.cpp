#include <bits/stdc++.h>
using namespace std;



void solve()
{
  unordered_map < char , int > m;
  m['B'] = 1,m['F'] = 1,m['P'] = 1,m['V'] = 1;
  m['C'] = 2,m['G'] = 2, m['J'] = 2,m['K'] = 2, m['Q'] = 2,m['S'] = 2,m['Z'] = 2,m['X']=2;
  m['D'] = 3, m['T'] = 3;
  m['L'] = 4;
  m['M'] = 5;
  m['N'] = 5;
  m['R'] = 6;
  
  string s;
  while(cin >> s)
  {
    int value = 0;
    for(auto it : s)
    {
      if(value != m[it])
      {
      
      if(m[it] != 0)
      cout << m[it];
      
      value = m[it];
      
      }
    }
    cout << endl;
  }
  
     
     
}

int main() {
    
    int test = 1;
    while(test--)
    solve();
    


}