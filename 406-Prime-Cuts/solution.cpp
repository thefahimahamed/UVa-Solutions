#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size = 1000 + 1;
    vector<int> prime(size);

    for (int i = 0; i <= size; i++)
    {
        prime[i] = i;
    }

    for (int i = 2; i * i <= size; i++)
    {
        if (prime[i] == i)
        {
            for (int j = i * i; j <= size; j += i)
            {
                if (prime[j] == j)
                    prime[j] = i;
            }
        }
    }

    vector<int> v;
    for (int i = 1; i <= size; i++)
        if (prime[i] == i)
            v.push_back(prime[i]);

    prime.clear();

    int n, c;
    while (cin >> n >> c)
    {
        auto it = upper_bound(v.begin(), v.end(), n);
        int range = it - v.begin();
        int k = range;

        int take = (k % 2 == 0) ? 2 * c : 2 * c - 1;
        if (take > k) take = k;

        int mid = k / 2;
        int start = mid - take / 2;
        if (start < 0) start = 0;

        cout << n << " " << c << ":";
        
        for (int i = start; i < start + take; i++)
        {
            cout << " " << v[i];
        }
        cout << "\n\n";
        
        
    }
}