#include <bits/stdc++.h>
using namespace std;

int bracket(string &str,int i,char x, char y) {
    int ans = 0;
    int flag = 0;
    int j;
    bool z = true;
    bool n = true;

    for (j = i+1; j < str.size(); j++) 
    {
        if (str[j] == x)
            flag++;
        if (str[j] == y) 
        {
            
            if (flag == 0 && i == 0 && n)
            {
                ans = j;
                n = false;
            }
                
            else if(flag == 0 && z)
            {
              ans = j;
              z = false;
              break;
            }
            else
                flag--;
        }
    }
    //cout << ans << " "<< flag << "\n";
    if(flag == 0)
    return ans;
    else
    return 0;
}


int main() {
    long long int test;
    cin >> test;
    cin.ignore();
        while (test--)
        {
            string s;
            getline(cin,s);
          if (s[0] == '\0')
          {
            cout<< "Yes\n";
            continue;
          }
          if(s.size() % 2 != 0)
          {
            cout << "No\n";
            continue;
          }

            int flag = 1;
          

                for(int i = 0; i < s.size(); i++)
                {
                if (s[i] == '(') 
                  {
                    char x = '(';
                    char y = ')';
                    int ans = bracket(s,i,x,y);
                    if(ans == 0)
                    {
                    flag = 0;
                    break;
                    }
                    if((ans-i) % 2 == 0)
                    {
                      flag = 0;
                      break;
                    }
                  }
                if(s[i] == '[')
                {
                  char x = '[';
                  char y = ']';
                  int ans = bracket(s,i,x,y);
                    if(ans == 0)
                    {
                    flag = 0;
                    break;
                    }
                    if((ans-i) % 2 == 0)
                    {
                      flag = 0;
                      break;
                    }
                }
                
                }
                
                
                if(flag)
                cout << "Yes\n";
                else
                cout << "No\n";
        }
    return 0;
}