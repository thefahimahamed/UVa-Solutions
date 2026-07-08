#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    int mx = 0;
    
    vector < string > v;
    string s;
    
    while(getline(cin,s))
    {
      int temp = s.size();
      mx = max(temp,mx);
      v.push_back(s);
    }
    
    
    
    for(int i = 0; i < mx; i++)
    {
      for(int j = v.size()-1; j >= 0; j--)
      {
        string temp = v[j];
        if(i < temp.size())
        cout << temp[i];
        else
        cout << " ";
      }
      cout << "\n";
    }
    return 0;
}