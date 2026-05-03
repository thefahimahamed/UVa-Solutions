
int main() {
    
    long long int n;
    int x=1;
    while(scanf("%lld",&n) != -1)
    {
        if(n==0)
        break;
        long long int arr[n];
        long long int sum=0;
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            sum+= arr[i];
        }
        long long int avg = sum/n;
        sum = 0;
        for(i=0;i<n;i++)
        {
            if(arr[i]>avg)
            {
                sum+= (arr[i]-avg);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %lld.\n\n",x,sum);
        x++;
    }
return 0;
}
