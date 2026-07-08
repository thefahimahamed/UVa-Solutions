#include <bits/stdc++.h>
using namespace std;
 


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    long long n;
    vector < long long > v;
    unordered_map < long long , int > m;
    while(cin >> n)
    {
      v.push_back(n);
      m[n]++;
    }
    
    for(auto it : v)
    {
    if(m[it] != 0)
    {
    cout << it << " " << m[it] << endl;
    m[it] = 0;
    }
    }
    
    
    return 0;
}
