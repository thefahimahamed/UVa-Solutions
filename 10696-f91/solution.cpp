#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  while(1)
  {
    int n;
    cin >> n;
    if(n == 0)
    break;
    if(n >= 111)
        cout << "f91("<< n <<") = " << n-10 << "\n";
    else
    cout << "f91("<< n <<") = " << 91 << "\n";
  }
}