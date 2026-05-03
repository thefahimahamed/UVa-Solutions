#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];
   while(fgets(str, 100, stdin) != NULL)
   {
   int i;
   int length = strlen(str);
   for(i = 0; i < length; i++)
   {
       if(str[i] >= 'A' && str[i] <='C')
           printf("2");
       else if(str[i] >= 'D' && str[i] <='F')
           printf("3");
       else if(str[i] >= 'G' && str[i] <='I')
           printf("4");
       else if(str[i] >= 'J' && str[i] <='L')
           printf("5");
       else if(str[i] >= 'M' && str[i] <='O')
           printf("6");
       else if(str[i] >= 'P' && str[i] <='S')
           printf("7");
       else if(str[i] >= 'T' && str[i] <='V')
           printf("8");
       else if(str[i] >= 'W' && str[i] <='Z')
           printf("9");
       else
           printf("%c",str[i]);
   }
   }
   return 0;
}