#include <bits/stdc++.h>
using namespace std;
 

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    vector < long long > v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    for(int i = 3; i <= 81; i++)
    {
      v[i] = v[i-1]+v[i-2];
    }
  
    while(cin >> test)
    {
      if(test == 0)
      break;
      
      cout << v[test] << endl;
      
    }
    
    
    
    
    return 0;
}
