#include <math.h>
#include <stdlib.h>

long long int passarray(long long int array[],long long int size)
{
    long long int i,j;
    long long int sum=0,max = 99999999999999;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            sum+= llabs(array[i]-array[j]);
        }
        if(sum<max)
        max= sum;
        
        sum=0;
    }
    
    return max;
}

int main()
{
    long long int n;
    while(scanf("%lld",&n) != -1)
    {
        while(n--)
        {
            long long int relatives;
            scanf("%lld",&relatives);
            long long int arr[relatives];
            long long int i;
            for(i=0;i<relatives;i++)
            {
                scanf("%lld",&arr[i]);
                
            }
            long long int ans = passarray(arr,relatives);
            printf("%lld\n",ans);
        }
    }
    
    return 0;
}