
int main() {
    
    long long int n;
    while(scanf("%lld",&n) != -1)
    {
        long long int count=1;
        if(n==0)
        break;
        long long int i,a=1,x=1;
        for(i=1;i<=n;i+=x)
        {
            x = (2*a)+1;
            a++;
            if(i==n)
            {
                printf("yes\n");
                count=0;
                break;
            }
        }
        if(count)
        printf("no\n");
        
    }
    return 0;

}
