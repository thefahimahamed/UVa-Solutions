#include <bits/stdc++.h>
using namespace std;




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    
    int n;
    while(cin >> n)
    {
      if(n== 0)
      break;
      long long G = 0;
      for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
        {
            int result = min(i, j);
            while (result > 0) 
            {
            if (i % result == 0 && j % result == 0) 
            break;
            result--;
            }
            G += result;
        }
        
        cout << G << "\n";

    }
    return 0;
}