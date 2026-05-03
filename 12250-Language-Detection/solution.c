#include <stdio.h>
#include <string.h>
int test = 1;
int main()
{
  char s[20];
  while(1)
  {
    
    int i , sum = 0;
    gets(s);
    char rus[] = "ZDRAVSTVUJTE";
    char spa[] = "HOLA";
    char eng[] = "HELLO";
    char ger[] = "HALLO";
    char fren[] = "BONJOUR";
    char ita[] = "CIAO";
    int length = strlen(s);
    
    if(s[0] == '#' && length == 1)
    break;
    
    printf("Case %d: ",test++);
    
    
    if(strcmp(s, eng) == 0)
    printf("ENGLISH");
    else if(strcmp(s, rus) == 0)
    printf("RUSSIAN");
    else if(strcmp(s, ita) == 0)
    printf("ITALIAN");
    else if(strcmp(s, ger) == 0)
    printf("GERMAN");
    else if(strcmp(s, fren) == 0)
    printf("FRENCH");
    else if(strcmp(s, spa) == 0)
    printf("SPANISH");
    else
    printf("UNKNOWN");
    
    printf("\n");
  }
  return 0;
  
  
}