#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin >> t)
    {
    int i = 5;
    int count = 0;
    while(i--)
    {
        int n;
        cin >> n;
        if(n==t)
        {
            count++;
        }
    }
    cout << count << "\n";
}




    return 0;
}