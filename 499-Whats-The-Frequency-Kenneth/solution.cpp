#include <bits/stdc++.h>
using namespace std;

bool cmp(pair < char , int > &a, pair < char , int > &b)
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

void solve()
{
  string s;
  
  
  while(getline(cin , s))
  {
     int mx = 0;
     unordered_map < char , int > m;
     for(auto it : s)
     {
     if(isalpha(it))   
     m[it]++;
     
     if(m[it] > mx)
     mx = m[it];
     }
     
    vector < pair < char , int > > freq(m.begin(),m.end());
    sort(freq.begin(),freq.end(),cmp);
    for(auto it:freq)
    {
    if(it.second == mx)
    cout << it.first;
    }
    cout << " " << mx << endl;
  }
  
     
     
}

int main() {
    
    int test = 1;
    while(test--)
    solve();
    


}