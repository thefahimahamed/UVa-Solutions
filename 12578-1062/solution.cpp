#include <bits/stdc++.h>
using namespace std;


int main() {
    int T;
    cin >> T;
    while (T--) {
        double L;
        cin >> L;

        const double PI = acos(-1.0);
        
        
        double R = L / 5.0;
        double W = L * 0.6;

       
        double red_area = PI * R * R;
        
        
        double total_area = L * W;

       
        double green_area = total_area - red_area;

     
        cout << fixed << setprecision(2) << red_area << " " << green_area << endl;
    }
    return 0;
}