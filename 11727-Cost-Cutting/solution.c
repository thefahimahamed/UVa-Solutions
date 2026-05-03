#include <stdio.h>

int main() {

        int test;
        scanf("%d",&test);
        int i;
        for(i=1;i<=test;i++)
        {
            int arr[3];
            int start;
            int min= 100000;
            int max = 0;
            for(start=0;start<3;start++)
            {
                scanf("%d",&arr[start]);
            }
            if(arr[0]== arr[1] && arr[1]==arr[2])
            {
                printf("Case %d: %d\n",i,arr[0]);
            }
            else
            {
            for(start=0;start<3;start++)
            {
                if(arr[start]>max)
                {
                    max = arr[start];
                }

                if(arr[start]<min)
                {
                    min = arr[start];
                }

            }

            for(start=0;start<3;start++)
            {
                if(arr[start]<max && arr[start]>min)
                {
                    printf("Case %d: %d\n",i,arr[start]);
                }


            }
            }
        }

    return 0;

}