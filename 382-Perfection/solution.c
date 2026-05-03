#include <stdio.h>
int main()
{
    long long int n;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%lld",&n) != -1 && n != 0)
    {
      int i;
      long long int sum = 0;
      
      for(i = 1; i <= (n/2); i++)
      {
        if(n%i == 0)
        sum+= i;
      }
      
      int x = n;
      int digit = 0;
      while(x)
      {
        x/=10;
        digit++;
      }
      x = 5 - digit;
      while(x--)
      {
        printf(" ");
      }
      
      if(sum==n)
      printf("%lld  PERFECT\n",n);
      else if(sum>n)
      printf("%lld  ABUNDANT\n",n);
      else
      printf("%lld  DEFICIENT\n",n);
      
    }
      printf("END OF OUTPUT\n");
      return 0;
}