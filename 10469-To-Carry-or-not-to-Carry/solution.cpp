#include <bits/stdc++.h>
using namespace std;

int main(){
  
int a,b;
while(cin >> a >> b)
{
string s;
int j = 1;
int sum = 0;
for(int i = 0; i < 32;i++, j *= 2)
{
   if(a & (1 << i) && (b & (1 << i)))
   {
     sum += 0*j;
   }
   else
   {
     if(a & (1 << i) || (b & (1 << i)))
     {
       sum += 1*j;
     }
     else
     {
       sum += 0*j;
     }
   }
   
}

cout << sum << "\n";
}
}