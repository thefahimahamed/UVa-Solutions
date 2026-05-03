#include<math.h>

long long int check_enough_bottles_have_or_not(long long int n)
{
    double f = n;
    f = ceil(f/3.0);
    f = f*3;
    n = f-n;
    return n;
}
long long int method1(long long int n)
{
        long long int sum = 0;
        while(n)
        {
            if(n<3)
            break;
            
            sum+= (n/3);
            n = n/3 + n%3;
        }
        return sum;
}

long long int method2(long long int n)
{
    long long int temp = 1;
    long long int ans = check_enough_bottles_have_or_not(n);
        if(ans!=0)
        {
            temp = 0;
        }
    long long int sum= 0;
    long long int x = ans+n;
    
    while(x)
    {
        
        if(x<3)
        break;
        
        
        sum+=(x/3);
        x = x/3 + x%3;
        if(temp==1 && x%3!=0)
        {
            long long int tm = check_enough_bottles_have_or_not(x);
            if(tm<=x)
            {
            x = x+tm;
            temp = 0;
            }
        }
    }
    if(x<ans)
    {
    ans = method1(n);
    return ans;
    }
    
    else
    return sum;
}

    
    

int main ()
{
    long long int n;
    while(scanf("%lld",&n) != -1)
    {
        long long int ans;
        if(n!=1)
        {
            ans = method2(n);
            printf("%lld\n",ans+n);
        }
        else
        {
            printf("%lld\n",n);
        }
    }
    return 0;
}
        