#include <stdio.h>
 
int main() {
 
    int a,i=1,sum =0;
    
    while(scanf("%d",&a) && a!=0)
    {
    while(i<=a)
    {
        sum+= (i*i);
        i++;
    }
    printf("%d\n",sum);
    sum = 0;
    i= 1;
    }
 
    return 0;
}