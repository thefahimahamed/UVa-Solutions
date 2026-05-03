
int main()
{
    long long int cs;
    long long int x = 1;
    while(scanf("%lld",&cs) != -1)
    {
        while(cs--)
        {
        long long int n;
        scanf("%lld",&n);
        long long int min=0;
        long long int arr[n];
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]>=min)
            {
                min = arr[i];
            }
        }
        printf("Case %lld: %lld\n",x,min);
        x++;
        }
    }
    return 0;
}