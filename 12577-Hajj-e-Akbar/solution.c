#include <string.h>
int digit = 1;
int main()
{
  char str[10];
  
  while(scanf("%[^\n]s", str) != EOF)
  {
    getchar();
  if(str[0] == '*')
  break;
  if(str[0]=='H')
  printf("Case %d: Hajj-e-Akbar\n",digit++);
  else
  printf("Case %d: Hajj-e-Asghar\n",digit++);
  
  }
  
  return 0;
  
  
}