#include <bits/stdc++.h>
using namespace std;


  
int main()
{
  int test;
  cin >> test;
  int cs = 1;
  while(test--)
  {
    vector < int > v;
    for(int i = 0; i < 7; i++)
    {
      int x;
      cin >> x;
      v.push_back(x);
    }
    
    sort(v.begin()+4,v.end(),greater < int > ());
    
    v[4] =( v[4]+v[5] ) / 2;
    
    int sum = v[0]+v[1]+v[2]+v[3]+v[4];
    
    int n = sum/10;
    
    
    if(n < 6)
    n = 0;
    
    unordered_map < int, char > m;
    m[10] = 'A';
    m[9] = 'A';
    m[8] = 'B';
    m[7] = 'C';
    m[6] = 'D';
    m[0] = 'F';
    
    cout << "Case " << cs++ <<": " << m[n];
    cout << "\n";
    
    
  }
  
}