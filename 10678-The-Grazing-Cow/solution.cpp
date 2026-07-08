#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while(test--)
    {
    double d,l;
    cin >> d >> l;
    double pi = 2*(acos(0));
    d = d/2;
    l = l/2;
    double c = sqrt((pow(l,2)) - (pow(d,2)));
    double area = pi*l*c;
    printf("%.3lf\n",area);
    }
    return 0;
}