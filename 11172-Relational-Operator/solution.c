#include <stdio.h>

int main() {

    long long int test;
    scanf("%lld",&test);
    while(test--)
    {
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        if(a<b)
        {
            printf("<\n");
        }
        else if(a>b)
        {
            printf(">\n");
        }
        else
        {
            printf("=\n");
        }
    }

}
