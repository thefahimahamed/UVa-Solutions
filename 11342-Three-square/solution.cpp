#include <bits/stdc++.h>
using namespace std;




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    multimap  < int , vector < int > > m;
    for(int i = 0; i <= 225; i++)
      {
        for(int j = i; j <= 225; j++)
        {
          if((i*i)+(j*j) > 225*225)
          break;
          for(int k = j; k <= 225; k++)
          {
            if((i*i)+(j*j+(k*k)) > 225*225)
            break;
            
            int sum =(i*i)+(j*j)+(k*k);
            vector < int > v(3);
            v[0] = i;
            v[1] = j;
            v[2] = k;
            m.insert({sum, v});
          }
        }
      }
      
      
    int test;
    cin >> test;
    while(test--)
    {
      
      long long input;
      cin >> input;
      
      
      
      
      
      
      if(m.find(input) != m.end())
      {
        auto it = m.find(input);
        auto itt = it->second;
        vector < int > temp = itt;
        for(int i = 0; i < temp.size(); i++)
        {
          cout << temp[i];
          if(i < temp.size()-1)
          cout << " ";
        }
      }
      else
      cout << "-1";
      
      cout << "\n";
      
      
      
      
    }
    return 0;
}