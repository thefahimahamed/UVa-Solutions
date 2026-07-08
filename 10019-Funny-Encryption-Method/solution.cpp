#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int test;
    cin >> test;
    while(test--)
    {
       int n;
       cin >> n;
       
       auto ans1 = [](int n)
       {
           int cnt = 0;
           for(int i = 0; i < 32; i++)
           {
               if((n >> i) & 1)
               cnt++;
           }
           return cnt;
       };
       
       auto ans2 = [&](int n)
       {
           int cnt = 0;
           
           while(n)
           {
               int rem = n%10;
               cnt += ans1(rem);
               n /= 10;
           }
           return cnt;
       };
       
       cout << ans1(n) << " "<< ans2(n) << "\n";
       
      
    }

}