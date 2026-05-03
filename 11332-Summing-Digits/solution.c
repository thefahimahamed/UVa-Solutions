long long int checker(long long int n)
{
    long long int ans = 0;
    while(n)
    {
        ans = ans+(n%10);
        n/=10;
    }
    return ans;
}
int main()
{
    long long int n;
    while(scanf("%lld",&n))
    {
        if(n==0)
        {
            break;
        }
        while(n)
        {
        long long int ans = checker(n);
        n = ans;
        if(n<=9)
            break;
        }
    printf("%lld\n",n);
    }
return 0;
}