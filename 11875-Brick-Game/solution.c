#include <stdio.h>
#include <stdlib.h>


int checker(int arr[], int n, int x)
{
  int i;
  int small = 0;
  int big = 0;
  for(i = 0; i < n; i++)
  {
    if(arr[i] == x)
    continue;
    
    if(x>arr[i])
    small++;
    else
    big++;
  }
  int diff = (big-small);
  return diff;
}

int main()
{
    int test;
    scanf("%d",&test);
    int c = 1;
    while(test--)
    {
      
      int n;
      scanf("%d",&n);
      int arr[n];
      
      int i;
      for(i = 0; i < n ; i++)
      {
        scanf("%d",&arr[i]);
      }
      
      printf("Case %d: ",c++);
      for(i = 0; i < n; i++)
      {
        int diff = checker(arr,n,arr[i]);
        if(diff==0)
        {
          printf("%d\n",arr[i]);
        }

      }


      
    }
    return 0;
}