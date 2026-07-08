\#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
  string s;
  cin >> s;
  unordered_map < char , int > m;
  for(int i = 0; i < s.size(); i++)
  m[s[i]]++;
  
  int cnt = 0;
  while(1)
  {
    if(m['M'] <= 0)
    break;
    
    if(m['A'] <= 2)
    break;
    
    if(m['R'] <= 1)
    break;
    
    if(m['G'] <= 0)
    break;
    
    if(m['I'] <= 0)
    break;
    
    if(m['T'] <= 0)
    break;
    
    m['M'] -= 1;
    m['A'] -= 3;
    m['R'] -= 2;
    m['G'] -= 1;
    m['I'] -= 1;
    m['T'] -= 1;
    
    cnt++;
  }
  
  cout << cnt << "\n";
  
  
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin >> test;
    while(test--)
    solve();
    
    
    
    
    return 0;
}

}