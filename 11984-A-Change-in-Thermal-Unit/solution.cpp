#include <bits/stdc++.h>
using namespace std;

  
int main() 
{
    int test;
    cin >> test;
    int cs = 1;
    while(test--)
    {
      double c,d;
      cin >> c >> d;
      double f = ((9*c)/5) + 32+ d;
      c = ((f-32)/9)*5;
      
      
      
      cout << fixed << setprecision(2);

      
      cout <<"Case " << cs++ << ": " << c << "\n";
    }
      
    return 0;
}