#include <stdio.h>
#include <math h>
#include <stdlib.h>
int main()
{
    int test;
long long int ans,temp;
int i;
int j;
int n;

    scanf("%d",&test);
    while(test--)
    {
      scanf("%d",&n);
      long long int arr[n];
      for(i = 0; i < n; i++)
      {
        scanf("%lld",&arr[i]);
      }
      for(i = 0; i < n-1; i++)
      {
        for(j = 0; j < n-1-i; j++)
        {
          if(arr[j]<arr[j+1])
        {
          temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
        }
      }
        ans = 0;
        for(i = 0; i < n-1; i++)
        {
          ans += (arr[i]-arr[i+1]);
        }
        printf("%lld\n",ans*2);
      }
      return 0;

}