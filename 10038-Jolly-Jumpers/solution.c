#include <stdio.h>


int number_difference(int n,int pre)
{
    if(n<pre)
    {
        int temp = pre;
        pre = n;
        n = temp;
    }
    int diff = n - pre;
    return diff;
}
long long sum_of_numbers(int n)
{
    n--;
    long long int sum = (n * (n + 1) )/ 2;
    return sum;
}
int main() {



    int test;
    while(scanf("%d",&test) != -1)
    {
        long long int sum = sum_of_numbers(test);
        long long int sum1 = 0;
        int i,pre,njolly= 0;
        for(i=1;i<=test;i++)
        {
            int n;
            scanf("%d",&n);
            if(i!= 1)
            {
                int diff = number_difference(n,pre);
                if(diff<test && diff>=1)
                {
                    sum1+= diff;
                }
                else
                {
                    njolly= 1;
                }

            }

            pre = n;
        }
        if(sum==sum1 && njolly==0)
        {
            printf("Jolly\n");
        }
        else if(test==1)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }

}