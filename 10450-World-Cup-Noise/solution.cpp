#include <bits/stdc++.h>
using namespace std;
 

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    vector < long long > v;
    v.push_back(1);
    v.push_back(2);
    for(int i = 2; i <= 81; i++)
    {
      v[i] = v[i-1]+v[i-2];
    }
    cin >> test;
    for(int i = 1; i <= test; i++)
    {
      int n;
      cin >> n;
      cout << "Scenario #" << i << ":\n" << v[n] << "\n";
      cout << endl;
      
    }
    
    
    
    
    return 0;
}
