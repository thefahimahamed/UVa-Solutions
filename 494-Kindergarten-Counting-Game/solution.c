#include <stdio.h>

int main() {
    char str[1000];
    while(fgets(str,sizeof(str),stdin) != NULL)
    {
    int i, j=0,first=0,ans=0;
    for(i=0;i<strlen(str);i++)
    {
        int a = str[i];
        if(a>=65 && a<=90)
        {
            if(first==0)
            {
            
            first=1;
            ans++;
            }
        }
        else if(a>=97 && a<=122)
        {
            if(first==0)
            {
            
            first=1;
            ans++;
            }
        }
        else if(a == 32)
        {
               
               first = 0;
            
        }
        else
        {
        first = 0;
        }
    }
    printf("%d\n",ans);
    }
return 0;
}
