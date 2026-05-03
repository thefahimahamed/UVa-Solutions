#include <math.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n) != -1)
    {
        while(n--)
        {
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    long long int ans= ((n/3)*3)*((m/3)*3);
    printf("%lld\n",ans/9);
        }
    }
    return 0;
}