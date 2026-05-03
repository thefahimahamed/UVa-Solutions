#include <bits/stdc++.h>
using namespace std;

  
int main() 
{
    int test;
    cin >> test;
    int cs = 1;
    cin.ignore();
    while(test--)
    {
      double x,y,r;
      cin >> x >> y >> r;
      double xy = sqrt((x*x)+(y*y));
      double small = r-xy;
      double large = (2*r)-small;
      
      
      cout << fixed << setprecision(2);

      
      cout << small << " " << large << "\n";
    }
      
    return 0;
}