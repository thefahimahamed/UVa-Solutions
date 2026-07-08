#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  unordered_map < int , pair < string , int > > m;
        pair < string , int > p;
        p.first = "kuti";  p.second = 1;
        m[15] = p;
        p.first = "lakh"; p.second = 2;
        m[14] = p;
        p.first = "lakh";  p.second = 1;
        m[13] = p;
        p.first = "hajar"; p.second = 2;
        m[12] = p;
        p.first = "hajar";  p.second = 1;
        m[11] = p;
        p.first = "shata"; p.second = 1;
        m[10] = p;
        p.first = "kuti";  p.second = 2;
        m[9] = p;
        p.first = "kuti"; p.second = 1;
        m[8] = p;
        p.first = "lakh";  p.second = 2;
        m[7] = p;
        p.first = "lakh"; p.second = 1;
        m[6] = p;
        p.first = "hajar";  p.second = 2;
        m[5] = p;
        p.first = "hajar"; p.second = 1;
        m[4] = p;
        p.first = "shata";  p.second = 1;
        m[3] = p;
        p.first = ""; p.second = 2;
        m[2] = p;
        p.first = ""; p.second = 1;
        m[1] = p;
        
    string s;
    int cnt = 1;
    while(cin >> s)
    {
        if(cnt < 10)
        cout << "   " << cnt++;
        else if(cnt < 100)
        cout << "  " << cnt++;
        else if(cnt < 1000)
        cout << " " << cnt++;
        else
        cout << cnt++;
        cout <<".";
        
        
        
        queue < char > q;
        bool zero = true;
        
        for(auto it : s)
        {
        if((int)it > 48)
        zero = false;
        q.push(it);
        }
        if(zero)
        {
        cout << " 0\n";
        continue;
        }
        
        
        while(!q.empty())
        {
           //cout << "size:" << q.size() << " )";
           if(q.front() == '0')
           {
           if(q.size() != 8)  
           q.pop();
           else
           {
             q.pop();
             cout << " kuti";
           }
           continue;
           }
           int temp = m[q.size()].second;
           string ans = m[q.size()].first;
           cout << " ";
           while(temp--)
           {
               cout << q.front();
               q.pop();
           }
               if(!q.empty())
               cout << " ";
               for(auto it : ans)
               {
                 if(isalpha(it));
                 cout << it;
               }
        }
        cout << endl;
        
        
    }

}