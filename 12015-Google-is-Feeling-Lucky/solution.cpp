#include <bits/stdc++.h>
using namespace std;
 


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    int test;
    cin >> test;
    int cnt = 1;
    while(test--)
    {
      int mx = 0;
      vector < pair < string , int > >v;
      for(int i = 0; i < 10; i++)
      {
        pair < string , int > p;
        cin >> p.first;
        cin >> p.second;
        v.push_back(p);
        mx = max(mx,p.second);
      }
      cout << "Case #" << cnt++ << ":\n";
      for(auto it : v)
      {
        // cout << it.first << it.second << endl;
        if(it.second == mx)
        cout << it.first << "\n";
      }
    }
    
    
    return 0;
}
