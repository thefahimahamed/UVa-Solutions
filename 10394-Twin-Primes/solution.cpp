#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int size = 20000000+1;
    vector < int > prime(size);
    for(int i = 2; i <= size; i++)
    {
        prime[i] =  i;
    }
    for(int i = 2; i * i <= size; i++)
    {
        if(prime[i] == i)
        {
            for(int j = i * i; j <= size; j+= i)
            {
                if(prime[j] == j)
                prime[j] = i;
            }
        }
    }
    vector < int > v;
    for(int i = 2; i <= size; i++)
    {
        if(prime[i] == i)
        v.push_back(prime[i]);
    }
    prime.clear();
    vector < pair < int , int > > ans;
    for(int i = 0; i < v.size()-1; i++)
    {
        pair < int,int > p;
        p.first = v[i];
        p.second = v[i+1];
        if(p.second - p.first == 2)
        ans.push_back(p);
    }
    
    int n;
    while(cin >> n)
    {
     auto it = ans[n-1];
     cout << "(" << it.first << ", " << it.second << ")\n";
    }
    
}