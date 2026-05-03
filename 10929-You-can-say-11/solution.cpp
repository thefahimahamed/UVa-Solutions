#include <iostream>
#include <string>
using namespace std;

int main() 
{
    while (1)
    {
        string s;
        getline(cin, s); 
        if (s == "0")
            break;

        int i;
        long long int sumeven = 0;
        long long int sumodd = 0;
        long long int sum = 0;

        for (i = 0; i < s.size(); i += 2)
        {
            if (s[i] == ' ')
                continue;
            int x = s[i] - '0';
            sumeven += x;
        }
        for (i = 1; i < s.size(); i += 2)
        {
            if (s[i] == ' ')
                continue;
            int x = s[i] - '0';
            sumodd -= x;
        }

        sum = sumodd + sumeven;

        if (sum % 11 == 0)
            cout << s << " is a multiple of 11.\n";
        else
            cout << s << " is not a multiple of 11.\n";
    }
}