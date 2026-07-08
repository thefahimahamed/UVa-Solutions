#include <bits/stdc++.h>
using namespace std;
 
 
void solve(long long n)
{
  vector < long long > v;
  for(int i = 0; i < n; i++)
  {
    long long temp; cin >> temp;
    v.push_back(temp);
  }
  long long p; cin >> p;
  
  vector < pair < long long , long long > > ans;
  
  
  sort(v.begin(),v.end());
  
  long long index = n;
  
  for(int i = 1; i < n; i++)
  {
    if(v[0]+v[i] > p)
    {
      index = i;
      break;
    }
  }
  
  
  
  
  for(int i = 0; i < index-1; i++)
  {
    long long  l = i+1;
    long long r = index;
    while(r >= l)
    {
      long long mid = (r+l)/2;
      if(v[mid] + v[i] == p)
      {
        pair < long long , long long > temp;
        temp.first = v[i];
        temp.second = v[mid];
        ans.push_back(temp);
        r = mid-1;
      }
      else if(v[mid] + v[i] > p)
      {
        r = mid - 1;
      }
      else
      {
        l = mid + 1;
      }
    }
  }
  pair < long long , long long > temp;
  int mn = v[n-1] - v[0];
  for(int i = 0; i < ans.size(); i++)
  {
    long long diff = abs(ans[i].first - ans[i].second);
    if(diff <= mn)
    {
      temp.first = ans[i].first;
      temp.second = ans[i].second;
      mn = diff;
    }
    // cout << ans[i].first << " " << ans[i].second << "\n";
  }
  
  cout << "Peter should buy books whose prices are "<< temp.first << " and " << temp.second << ".\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    while(cin >> n)
    {
    solve(n);
    cout << endl;
    }
    
    
    return 0;
}