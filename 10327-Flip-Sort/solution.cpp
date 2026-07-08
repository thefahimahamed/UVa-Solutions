#include <bits/stdc++.h>
using namespace std;


void solve(int n)
{
  vector < int > v;
  v.push_back(0);
  for(int i = 1; i <= n; i++)
  {
    int temp; cin >> temp;
    v.push_back(temp);
  }
  
  vector < int > cpy(v.begin(),v.end());
  sort(cpy.begin(),cpy.end());
  
  int cnt = 0;
  

  for(int i = 1; i <= cpy.size()-1; i++)
  {
    for(int k = 1; k <= cpy.size()-1; k++)
    {
    if(v[k] == cpy[i])
    {
      for(int j = k; j > 1; j--)
      {
        if(v[j] < v[j-1])
        {
          cnt++;
          int temp = v[j-1];
          v[j-1] = v[j];
          v[j] = temp;
        }
      }
    }
    }
  }
  cout << "Minimum exchange operations : " << cnt << endl;
  
  
  
  
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    while(cin >> test)
    solve(test);
    
    return 0;
}