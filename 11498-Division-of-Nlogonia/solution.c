#include <stdio.h>
int main()
{
long long int n;
while(scanf("%lld",&n) != -1)
{
    long long int x,y;
    scanf("%lld %lld",&x,&y);
    while(n--)
    {
        long long int x1,y1;
        scanf("%lld %lld",&x1,&y1);
        x1 = x1-x;
        y1 = y1-y;
        if(x1==0 || y1==0)
            printf("divisa\n");
        else if(x1>=0 && y1>=0)
            printf("NE\n");
        else if(x1>=0 && y1<=0)
            printf("SE\n");
        else if(x1<=0 && y1>=0)
            printf("NO\n");
        else
        printf("SO\n");
    }
}
return 0;
}
