#include <stdio.h>

int check(int m)
{
    int n = m;
    int count = 1;
    while (n >= 1)
    {
        if (n == 1)
        {
            break;
        }
        else if (n % 2 != 0)
        {
            n = (3 * n) + 1;
        }
        else
        {
            n /= 2;
        }
        count++;
    }
    return count;
}

int main() {
    int i, j;
    while (scanf("%d %d", &i, &j) != -1)
    {
        int max = 0;
        if (i <= j)
        {
            int start = i;
            while (start <= j)
            {
                int ans = check(start);
                if (ans >= max)
                {
                    max = ans;
                }
                start++;
            }
            printf("%d %d %d\n", i, j, max);
        }
        else
        {
            int start = i;
            while (start >= j)
            {
                int ans = check(start);
                if (ans >= max)
                {
                    max = ans;
                }
                start--;
            }
            printf("%d %d %d\n", i, j, max);
        }
    }
    return 0;
}