#include <string.h>

int main()
{
  char n[1000];
  while(scanf("%[^\n]s",n) != -1)
  {
    getchar();
    int i;
    for(i = 0 ; i < strlen(n); i++)
    {
      if(n[i] == ' ')
      continue;
      
      n[i] = n[i]-7;
    }
    
    printf("%s\n",n);
  }
  
  
  
  return 0;
  
  
}