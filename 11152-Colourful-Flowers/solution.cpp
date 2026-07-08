#include <bits/stdc++.h>
using namespace std;



const double PI = acos(-1.0);
double tarea(double a, double b, double c)
{
  double s = (a+b+c)/2.0;
  double area = sqrt(s * (s - a) * (s - b) * (s - c));
  return area;
}

double carea(double a,double b,double c,double area)
{
  double r = a*b*c;
  r = r/(4*area);
  r = M_PI*r*r;
  return r-area;
  
}

double marea(double a,double b,double c,double area)
{
  double s = (a+b+c)/2.0;
  double r = area/s;
  r = M_PI*r*r;
  return r;
}


int main()
{
  double a,b,c;
  while(cin >> a >> b >> c)
  {
    double tr_area = tarea(a,b,c);
    double s = (a+b+c)/2;
    double under = s * (s - a) * (s - b) * (s - c);
        if (under <= 0.0) {
            cout << fixed << setprecision(4) << "0.0000 0.0000 0.0000\n";
            continue;
        }
    double c_area = carea(a,b,c,tr_area);
    double mini_area = marea(a,b,c,tr_area);
    tr_area -= mini_area;
    cout << fixed << setprecision(4) << c_area << " " << tr_area << " " << mini_area << "\n";
  }
    
}
