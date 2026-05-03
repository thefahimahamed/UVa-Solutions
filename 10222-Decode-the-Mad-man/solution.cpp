#include <bits/stdc++.h>
using namespace std;

int main()
{

string str = "`1234567890-=qwertyuiop[]@asdfghjkl;'zxcvbnm,./";
str[25] = '\\';
string str1;

while(getline(cin, str1))
{
for(int i = 0; i < str1.size(); i++)
{
  if(str1[i] >= 'A' && str1[i] <= 'Z')
  str1[i] = str1[i]+32;
}

int i,j;
for(i=0;i<str1.size();i++)
{
    for(j=0;j<str.size();j++)
    {
        char temp1 = str1[i];
        char temp2 = str[j];
        if(temp1 == temp2 || temp1 == ' ')
        {
            if(temp1!=' ')
            cout << str[j-2];
            else
            printf(" ");
            
            break;
            
        }
    }
}
cout << "\n";
}
return 0;
}

