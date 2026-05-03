#include <stdio.h>

void dec_sort(long long int new[],int n)
{
  int i,j;
  for(i = 0; i < n-1; i++)
      {
        for(j = 0; j < n-1-i; j++)
        {
          if(new[j]<new[j+1])
        {
          long long int temp = new[j];
          new[j] = new[j+1];
          new[j+1] = temp;
        }
        }
      }
}
void inc_sort(long long int new[],int n)
{
  int i,j;
  for(i = 0; i < n-1; i++)
      {
        for(j = 0; j < n-1-i; j++)
        {
          if(new[j]>new[j+1])
        {
          long long int temp = new[j];
          new[j] = new[j+1];
          new[j+1] = temp;
        }
        }
      }
      
}
int main()
{
    int test;
    scanf("%d",&test);
    printf("Lumberjacks:\n");
    while(test--)
    {
      int n=10;
      long long int arr[n];
      long long int inc[n];
      long long int dec[n];
      int i;
      int j;
      for(i = 0; i < n; i++)
      {
        scanf("%lld",&arr[i]);
        inc[i] = arr[i];
        dec[i] = arr[i];
      }
      
      dec_sort(dec,n);
      
      inc_sort(inc,n);
      int ansi = 1,ansd = 1;
      
      for(i = 0; i < n; i++)
      {
        if(arr[i]!=inc[i])
        {
          ansi = 0;
        }
        if(arr[i]!=dec[i])
        {
          ansd = 0;
        }
      }
      
      if(ansi == 1 || ansd ==1)
      printf("Ordered\n");
      else
      printf("Unordered\n");
      
      
      }
      return 0;

}