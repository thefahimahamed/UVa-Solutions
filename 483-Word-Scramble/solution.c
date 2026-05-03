#include <string.h>


void reverse(char new[], int size)
{
  int i;
  for(i = size-1 ; i>=0 ; i--)
  {
    printf("%c",new[i]);
  }
}
int main()
{
  int size=2097152;
  char str[size];
  
  while(gets(str) != NULL)
  {
  char new[size];
  int i;
  int j = 0;
  int length = strlen(str);
  for(i = 0 ; i <= length; i++)
  {
    if(str[i] != ' ' && str[i] != '\0')
    {
      new[j] = str[i];
      j++;
    
    }
    
    else
    {
      new[j] = '\0';
      int length1 = strlen(new);
      reverse(new,length1);
      j = 0;
    }
    
    
  if(str[i]== ' ')
  printf(" ");
  }
  
  printf("\n");
  
  }
}