#include <bits/stdc++.h>
using namespace std;

bool cmp(pair < char , int > &a, pair < char , int > &b)
{
  if(a.second < b.second)
  return true;
  else if (a.second == b.second)
  {
    if(a.first > b.first)
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
    
    string s;
    bool first = false;
    while(getline(cin ,s))
    {
      
      if(first)
      {
        cout << "\n";
      }
      unordered_map  < char , int > m;
      for(auto it : s)
      m[it]++;
      
      vector < pair < char , int > > v;
      for(auto it : m)
      {
        pair < char , int > temp;
        temp.first = it.first;
        temp.second = it.second;
        v.push_back(temp);
      }
      
      sort(v.begin(),v.end(),cmp);
      for(auto it : v)
      {
        
        cout << (int)it.first << " " << it.second <<  endl;
      }
      
      first = true;
    }
    
    return 0;
}
