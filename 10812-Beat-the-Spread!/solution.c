#include <math.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n) != -1)
    {
        while(n--)
        {
    long long int s,d;
    scanf("%lld %lld",&s,&d);
    if(s>=d)
    {
    long long int x = llabs((s+d)/2);
    long long int y = llabs(s-x);
    if(x>y)
    printf("%lld %lld\n",x,y);
    else
    printf("%lld %lld\n",y,x);
    }
    else
    printf("impossible\n");
        }
    }
    return 0;
}