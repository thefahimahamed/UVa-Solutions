
int main() {
 
 long long int n;
 while(scanf("%lld",&n) != -1)
 {
 while(n--)
 {
     long long int size;
     scanf("%lld",&size);
     long long int arr[size];
     long long int i,j,swap=0;
     for(i=0;i<size;i++)
     {
         scanf("%lld",&arr[i]);
     }
     
     for(i=0;i<size-1;i++)
     {
         for(j=0;j<size-i;j++)
         {
             if(arr[j]>arr[j+1])
             {
                 long long int temp = arr[j];
                 arr[j] = arr[j+1];
                 arr[j+1] = temp;
                 swap++;
             }
         }
     }
     printf("Optimal train swapping takes %lld swaps.\n",swap);
 }
 }
 return 0;

}