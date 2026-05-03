#include <string.h>


int main()
{

char str[] = "`1234567890-=QWERTYUIOP[]@ASDFGHJKL;'ZXCVBNM,./";
str[25] = '\\';
char str1[strlen(str)];
fgets(str1, sizeof(str1), stdin);
int i,j;
for(i=0;i<strlen(str1);i++)
{
    for(j=0;j<strlen(str);j++)
    {
        char temp1 = str1[i];
        char temp2 = str[j];
        if(temp1 == temp2 || temp1 == ' ')
        {
            if(temp1!=' ')
            printf("%c",str[j-1]);
            else
            printf(" ");
            break;
        }
    }
}
return 0;
}

