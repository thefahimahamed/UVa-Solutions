#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
      bool operator()(const long long &a,const long long &b)const{
        if(a >= b)
        return true;
        else
        return false;
      }

};

int main() {
    
    long long n;
    while(cin >> n)
    {
    if(n == 0)
    break;
    
    priority_queue < long long ,vector < long long >, cmp > pq;
    
    for(int i = 0; i < n; i++)
    {
      int temp; cin >> temp; 
      pq.push(temp);
    }
    long long sum = 0;
    while(pq.size() > 1)
    {
      long long x = pq.top(); pq.pop();
      long long y = pq.top(); pq.pop();
      long long temp = (x+y);
      sum += temp;
      pq.push(temp);
    }
    
    cout << sum << "\n";
    
    }

}