#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    int cnt = 1;
    while(cin >> s)
    {
        unordered_set < char > st;
        int q;
        cin >> q;
        for(auto it : s)
        {
        st.insert(it);
        if(st.size() == 2)
        break;
        }
        int len = st.size();
        cout << "Case " << cnt++ << ":" << endl;
        while(q--)
        {
            
            int l,r;
            cin >> l >> r;
            if(len == 1)
            {
             cout << "Yes\n";
             continue;
            }
            st.clear();
            for(int i = min(l,r); i <= max(l,r); i++)
            {
             st.insert(s[i]);
             if(st.size() == 2)
             break;
            }
            if(st.size() == 2)
            cout << "No\n";
            else
            cout << "Yes\n";
        }
    }
    
}