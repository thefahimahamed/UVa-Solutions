#include <stdio.h>

float calculator(float a,float b,float c)
{
    float ans = a/b;
    ans = ans*c*b;
    return ans;
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int farmer;
        scanf("%d",&farmer);
        int sum = 0;
        while(farmer--)
        {
            int arr[3];
            int i;
            for(i = 0; i < 3; i++)
            {
                scanf("%d",&arr[i]);
            }
            float ans = calculator(arr[0],arr[1],arr[2]);
        }
        sum += ans;
        printf("%d\n",sum);
    }
    return 0;
}
