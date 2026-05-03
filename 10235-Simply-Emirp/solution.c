#include <stdio.h>

long long int prime_checker(long long int n)
{
    long long int i,count=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        return n;
    }
    else
    {
        return 0;
    }
}

long long int reverse(long long int n)
{
    long long int rem = 0;
    while(n)
    {

        rem = rem*10+(n%10);
        n/=10;
    }
    return rem;
}

int main() {

    long long int n;
    while(scanf("%lld",&n) != -1)
    {
    long long int checker = prime_checker(n);
    if(checker==0)
    {
        printf("%lld is not prime.\n",n);
    }
    else
    {
        long long int rev = reverse(n);
        if(n==rev)
        {
            printf("%lld is prime.\n",n);
        }
        else
        {
        checker = prime_checker(rev);
        if(checker==0)
        {
            printf("%lld is prime.\n",n);
        }
        else
        {
            printf("%lld is emirp.\n",n);
        }
        }
    }
    }
}