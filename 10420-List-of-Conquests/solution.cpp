#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  multimap < string , string > m; 
  while(n--)
  {
    string country;
    string name;
    cin >> country;
    cin.ignore();
    getline(cin,name);
    m.insert({country,name});
  }
  map < string , int > mp;
  for(auto it : m)
  mp[it.first]++;
  for(auto it : mp)
  cout << it.first << " " << it.second << "\n";
}

int main() {
    
    int test = 1;
    while(test--)
    solve();
    


}