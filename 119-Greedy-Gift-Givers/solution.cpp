#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    bool first = false;
    while(cin >> n)
    {
        if(first)
        cout << "\n";
        vector< string > v(n);
        for(auto &it : v)
        cin >> it;
        unordered_map < string,int> m;
        while(n--)
        {
            string s; cin >> s;
            int a,b; cin >> a >> b;
            if(b == 0)
            continue;
            int value = (a/b);
            m[s] -= (value*b);
            while(b--)
            {
                string temp; cin >> temp;
                m[temp] += value;
            }
        }
        for(auto &it : v)
        cout << it << " "<< m[it] << endl;
        first = true;
    }

}