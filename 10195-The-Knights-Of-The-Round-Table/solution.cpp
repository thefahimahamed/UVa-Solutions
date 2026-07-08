#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1.0);



int main()
{
  double a,b,c;
  while(cin >> a >> b >> c)
  {
    double s = (a+b+c)/2;
    double under = s * (s - a) * (s - b) * (s - c);
        if (under <= 0.0) 
        {
            cout << fixed << setprecision(4) << "The radius of the round table is: 0.000\n";
            continue;
        }
   double area = sqrt(s * (s - a) * (s - b) * (s - c));
   double radius = area/s;
    cout << fixed << setprecision(3) << "The radius of the round table is: "<< radius << "\n";
  }
    
}
