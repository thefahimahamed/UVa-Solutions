#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    int test; cin >> test;
    while(test--)
    {
      string input; cin >> input;
      int q; cin >> q;
      while(q--)
      {
        string s;
        cin >> s;
        bool flag = false;
        for(int i = 0; i < input.size(); i += s.size())
        {
          if(input.substr(i,s.size()) == s)
          flag = true;
        }
        if(flag)
        cout << "y\n";
        else
        cout << "n\n";
      }
    }
    return 0;
}