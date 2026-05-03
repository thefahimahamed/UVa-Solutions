#include <bits/stdc++.h>
using namespace std;

int checker(int n)
{
    int ans = 0;
    while(n>2)
    {
        ans += n/3;
        int rem = n%3;
        n = (n/3) + rem;
    }
    if(n==2)
    ans++;
    
    return ans;
}

int main() {
    
    vector< int > v;
    int x;
    while(cin>>x){
        if(x==0)
        break;
        v.push_back(x);
    }
    
    for(auto it = v.begin(); it != v.end(); it++)
    {
        int ans = checker(*it);
        cout << ans << "\n";
    }
    
    

}