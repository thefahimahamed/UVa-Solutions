#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
      if(n==0)
      break;
      
    int first = 0;
    int last = 1;
    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
      sum = first+last;
      first = last;
      last = sum;
    }
    
    cout << sum << "\n";
    }

    return 0;
}