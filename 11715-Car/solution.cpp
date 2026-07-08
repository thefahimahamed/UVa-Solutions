#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    
    
    int test;
    int cs = 1;
    while(cin >> test)
    {
      if(test == 0)
      break;
      if(test == 1)
      {
        double u,v,t;
        cin >> u >> v >> t;
        double a = (v-u)/t;
        double s = (pow(v,2) - pow(u,2))/(2*a);
        
        printf("Case %d: %.3lf %.3lf\n",cs++,s,a);
      }
      else if(test == 2)
      {
        double u,v,a;
        cin >> u >> v >> a;
        double t = (v-u)/a;
        double s = (v+u)/2;
        s *= t;
        
        printf("Case %d: %.3lf %.3lf\n",cs++,s,t);
        
      }
      else if(test == 3)
      {
        double u , a , s;
        cin >> u >> a >> s;
        double v = pow(u,2) + (2*a*s);
        v = sqrt(v);
        double t = (v-u)/a;
        
        printf("Case %d: %.3lf %.3lf\n",cs++,v,t);
      }
      else
      {
        double v , a ,s;
        cin >> v >> a >> s;
        double u = pow(v,2) - (2*a*s);
        u = sqrt(u);
        double t = (v-u)/a;
        
        printf("Case %d: %.3lf %.3lf\n",cs++,u,t);
      }
    
      
      
    }
    return 0;
}