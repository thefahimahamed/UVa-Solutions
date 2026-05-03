#include <stdio.h>
int main()
{
    int n;
    int cas = 1;
    int x,c;
    while(1){
      scanf("%d",&n);
      if(n < 0)
      break;
      if(n == 1)
      {
        printf("Case %d: 0\n",cas++);
        continue;
      }
      x = 1;
      c = 0;
      while(1)
      {
        x+=x;
        if(x>n)
        {
          c++;
          break;
        }
        else if(x==n)
        {
          c++;
          break;
        }
        else
        c++;
      }
      printf("Case %d: %d\n",cas++,c);
    }
    return 0;
}