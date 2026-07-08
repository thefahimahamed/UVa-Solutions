#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
  vector < string > v;
  string gate = "E-N-D";
  while(1)
  {
    string s;
    cin >> s;
    if(s == gate)
    break;
    
    v.push_back(s);
  }
  string ans;
  int mx = 0;
  for(int i = 0; i < v.size(); i++)
  {
    int cnt = 0;
    for(int j = 0; j < v[i].size(); j++)
    {
      char ch = v[i][j];
      if(isalpha(ch) || ch == '-')
      cnt++;
    }
    if(cnt > mx)
    {
      ans = v[i];
      mx = cnt;
    }
  }
  for(int i = 0; i < ans.size(); i++)
  {
  if(isalpha(ans[i]) || ans[i] == '-')
  {
  char ch = tolower(ans[i]);
  cout << ch;
  }
  }
  cout << endl;
  
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    
    
    return 0;
}