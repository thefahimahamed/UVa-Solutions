#include <bits/stdc++.h>
using namespace std;


int main()
{
   
  
  int n;
  while(cin >> n)
  {
    long long int sum = 0;
    for(int i = 1; i <= n; i++)
    {
      long long int temp = pow(i,3);
      sum+= temp;
    }

    cout << sum << "\n";
    
}
    
    
    
    
    
}
}