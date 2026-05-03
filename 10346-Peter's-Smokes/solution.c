long long int checker(long long int n,long long int k)
{
    long long int ans = 0;
    while(n)
    {
        if(n<k)
        {
            break;
        }
        ans = ans+(n/k);
        n= (n/k)+(n%k);
        
    }
    return ans;
}
int main()
{
    long long int n,k;
    while(scanf("%lld %lld",&n,&k)==2)
    {
        long long int ans = checker(n,k);
        printf("%lld\n",ans+n);
    }
return 0;
}