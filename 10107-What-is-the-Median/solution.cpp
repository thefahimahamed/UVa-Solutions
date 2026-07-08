#include <bits/stdc++.h>
using namespace std;


  
int main()
{
  vector < long long int > v;
  long long int temp;
  while(cin >> temp)
  {
    v.push_back(temp);
    sort(v.begin(),v.end());
    long long int length = v.size();
    if(length % 2 != 0)
    {
      long long int ans = length+1;
      ans = ans/2;
      ans--;
      cout << v[ans] << "\n";
    }
    else
    {
      long long int ans = length/2;
      ans--;
      cout << (v[ans]+v[ans+1])/2 << "\n";
    }
    
  }
  
}