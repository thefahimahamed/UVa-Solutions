#include <stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    int c = 1;
    while(test--)
    {
      
      int n,k,p;
      scanf("%d %d %d",&n,&k,&p);
      printf("Case %d: ",c++);
      int i;
      int sum = k;
      for(i = 1; i <=p ; i++)
      {
        sum++;
        if(sum>n)
        sum  = 1;
      }
      printf("%d\n",sum);
      
    }
    return 0;
}