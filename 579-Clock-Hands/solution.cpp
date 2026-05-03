#include <bits/stdc++.h>
using namespace std;




int main ()
{
    while(1)
    {
    pair < int , int > p;
    char colon;
    cin >> p.first >> colon >> p.second;
   
    if(p.first == 0 && p.second  == 0)
    break;
    
    double right = (p.first*5.0) - p.second;
    double rightans = right*6;
    rightans = rightans + (p.second/2.0);
    if(rightans < 0)
    rightans = rightans*(-1);
    
  
    double ans = 360-rightans;
    ans = min(ans,rightans);
    
    cout << fixed << setprecision(3) << ans << "\n";
    }
      
      
}