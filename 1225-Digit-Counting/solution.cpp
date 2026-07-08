#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--)
    {
      int n;
      cin >> n;
      map < int , int > m;
      for(int i = 1; i <= n; i++)
      {int temp = i;
      while(temp)
      {
        m[temp%10]++;
        temp/=10;
      }
      }
      for(auto i = 0; i <= 9; i++)
      {
        cout << m[i];
        if(i != 9)
        cout << " ";
      }
      cout << "\n";
      
    }
    return 0;
}