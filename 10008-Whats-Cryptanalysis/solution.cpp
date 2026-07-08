#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair < char , int > &a,pair < char , int > &b)
{
  if(a.second > b.second)
  return true;
  else if(a.second == b.second)
  {
    if(a.first < b.first)
    return true;
    else
    return false;
  }
  else
  return false;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    int n; 
    while(cin >> n)
    {
    cin.ignore();
    unordered_map < char , int > m;
    while(n--)
    {
      string s;
      getline(cin , s);
      
      for(auto it : s)
      {
        if(isalpha(it))
        {
        it = toupper(it);
        m[it]++;
        }
      }
    }
    
      vector < pair < char , int > > v(m.begin(),m.end());
      
      sort(v.begin(),v.end(),cmp);
      
      for(auto it : v)
      {
        cout << it.first << " " << it.second << endl;
      }
    
    }
    return 0;
}
