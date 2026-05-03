#include <string.h>
int ans;
void recursion(int x)
{
  ans = 0;
  int sum = 0;
  while(x)
  {
    int rem = x%10;
    sum+= rem;
    x/=10;
  }
  if(sum >= 0 && sum<=9)
  ans = sum;
  else
  recursion(sum);
}

void filter(char str[],char arr[], int size)
{
  int i;
  int j = 0;
  for(i = 0; i < strlen(str); i++)
    {
      if(str[i] >= 'A' && str[i] <= 'Z')
      {
        arr[j] = str[i];
        j++;
      }
      else if(str[i] >= 'a' && str[i] <= 'z')
      {
        arr[j] = str[i];
        j++;
      }
      else
      continue;
    }
    arr[j] = '\0';
}

void checker(char str[], int size)
{
  int sum = 0;
  int i;
  for(i = 0; i < strlen(str); i++)
  {
    int x = str[i] - 96;
    sum+= x;
  }
  recursion(sum);
}



int main()
{
  int size = 30;
  char str1[size];
  char str2[size];
  char arr1[size];
  char arr2[size];
  
  while(1)
  {
    int x = scanf("%[^\n]s ", str1);
    getchar();
    int y = scanf("%[^\n]s ", str2);
    getchar();
    int i;
    int j = 0;
    
    filter(str1,arr1,size);
    filter(str2,arr2,size);
    
    if(x == -1 && y == -1)
    break;
    
  
    for(i = 0; i < strlen(arr1); i++)
    {
      if(arr1[i] >= 'A' && arr1[i] <= 'Z')
      arr1[i] = arr1[i]+32;
    }
    for(i = 0; i < strlen(arr2); i++)
    {
      if(arr2[i] >= 'A' && arr2[i] <= 'Z')
      arr2[i] = arr2[i]+32;
    }
    
    
    checker(arr1,size);
    float r1 = ans;
    checker(arr2,size);
    float r2 = ans;
  if(r1>r2)
  printf("%.02f %\n",(r2/r1)*100);
  else
  printf("%.02f %\n",(r1/r2)*100);
  
  }
  
  return 0;
  
  
}