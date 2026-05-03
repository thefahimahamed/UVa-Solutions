#include <stdio.h>
long long int func(long long int a,long long int b)
{
    if(b>a)
    {
        long long int temp = a;
        a = b;
        b = temp;
    }
    long long int carry = 0,ans=0;
    while(a)
    {
        long long int rem1 = a%10;
        long long int rem2 = b%10;
        if(rem1+rem2+carry>9)
        {
           ans++;
           carry = 1;
        }
       else 
           carry = 0;
       
        a/=10;
        b/=10;
    }
    return ans;
    
}



int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0 & b==0)
        {
            break;
        }
 
     long long int ans = func(a,b);
     if(ans == 0)
         printf("No carry operation.\n");
     else if(ans == 1)
         printf("%d carry operation.\n",ans);
     else
         printf("%d carry operations.\n",ans);
    }
 return 0;
}
     
     