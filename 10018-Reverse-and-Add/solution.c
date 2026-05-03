#include <stdio.h>

long long int iteration = 0,final_result;
void sum(long long int reverse,long long int real)
{
    long long int sum = real+reverse;
    palidrome_checker(sum);
    iteration++;
}

long long int rev(long long int real)
{
    long long int reverse = 0;
    while(real)
    {
        reverse = reverse*10+ real%10;
        real /= 10;
    }
    return reverse;
}




void palidrome_checker(long long int real)
{
    long long int reverse = rev(real);
    if(reverse==real)
    {
        final_result = real;
    }
    else
    {
        sum(reverse,real);
    }
}

int main() 
{
long long int n;
while(scanf("%lld",&n) != -1)
{
    while(n--)
    {
        long long int real;
        scanf("%lld",&real);
        palidrome_checker(real);
        printf("%lld %lld\n",iteration,final_result);
        final_result=0;
        iteration = 0;
        
    }
}
return 0;
}
