#include <bits/stdc++.h>
using namespace std;




int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    while(cin >> n >> m)
    {
      
    if(n == 0 || m == 0)
    break;
    
    map < pair < int , int > , int > mp;
    
    for(int i = 1; i <= n; i++)
    {
      string s;
      cin >> s;
      
      for(int j = 0; j < s.size(); j++)
      {
        if(s[j] == '@')
        {
          pair < int , int > p;
          p.first = i;
          p.second = j+1;
          mp[p] = 1;
        }
      }
    }
    
    // cout << "Test\n";
    int tracker = 2;
    
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
      const int &fi = it -> first.first;
      const int &si = it -> first.second;
      int &valuei = it -> second;
      if(valuei == 1)
      {
        valuei = tracker;
        tracker++;
      }
      for(auto kt = mp.begin(); kt != mp.end(); kt++)
      {
       if(kt == it)
       continue;
       
       const int &fk = kt -> first.first;
       const int &sk = kt -> first.second;
       int &valuek = kt -> second;
        if(abs(fk-fi) < 2 && abs(sk - si) < 2)
        {
          if(valuek == 1)
          valuek = valuei;
          else
          {
          int temp = min(valuei,valuek);
          valuei = temp;
          valuek = temp;
          }
        }
      }
      
    }
    
    
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
      const int &fi = it -> first.first;
      const int &si = it -> first.second;
      int &valuei = it -> second;
      for(auto kt = mp.begin(); kt != mp.end(); kt++)
      {
       if(kt == it)
       continue;
       
       const int &fk = kt -> first.first;
       const int &sk = kt -> first.second;
       int &valuek = kt -> second;
        if(abs(fk-fi) < 2 && abs(sk - si) < 2)
        {
          int temp = min(valuei,valuek);
          valuei = temp;
          valuek = temp;
        }
      }
      
    }
    
    for(auto it = mp.rbegin(); it != mp.rend(); it++)
    {
      const int &fi = it -> first.first;
      const int &si = it -> first.second;
      int &valuei = it -> second;
      for(auto kt = mp.rbegin(); kt != mp.rend(); kt++)
      {
       if(kt == it)
       continue;
       
       const int &fk = kt -> first.first;
       const int &sk = kt -> first.second;
       int &valuek = kt -> second;
        if(abs(fk-fi) < 2 && abs(sk - si) < 2)
        {
          int temp = min(valuei,valuek);
          valuei = temp;
          valuek = temp;
        }
      }
      
    }
    
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
      const int &fi = it -> first.first;
      const int &si = it -> first.second;
      int &valuei = it -> second;
      for(auto kt = mp.begin(); kt != mp.end(); kt++)
      {
       if(kt == it)
       continue;
       
       const int &fk = kt -> first.first;
       const int &sk = kt -> first.second;
       int &valuek = kt -> second;
        if(abs(fk-fi) < 2 && abs(sk - si) < 2)
        {
          int temp = min(valuei,valuek);
          valuei = temp;
          valuek = temp;
        }
      }
    }
    for(auto it = mp.rbegin(); it != mp.rend(); it++)
    {
      const int &fi = it -> first.first;
      const int &si = it -> first.second;
      int &valuei = it -> second;
      for(auto kt = mp.rbegin(); kt != mp.rend(); kt++)
      {
       if(kt == it)
       continue;
       
       const int &fk = kt -> first.first;
       const int &sk = kt -> first.second;
       int &valuek = kt -> second;
        if(abs(fk-fi) < 2 && abs(sk - si) < 2)
        {
          int temp = min(valuei,valuek);
          valuei = temp;
          valuek = temp;
        }
      }
    }
    
    
    
    unordered_set < int > s1;
    for(auto it : mp)
    {
      
      s1.insert(it.second);
    }
    
    cout << s1.size() << endl;
    
    



    }
    
    return 0;
}
