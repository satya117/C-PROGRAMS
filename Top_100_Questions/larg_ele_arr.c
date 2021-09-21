#include <stdio.h>

int largest_ele(int arr[],int n)
{
    int max=arr[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=max)
        max=arr[i];
    }
    printf("largest element:%d",max);
    return 0;
}
int main()
{
   int n;
   printf("Enter number of elements:\n");
   scanf("%d",&n);
   int arr[n],i;
   printf("Enter the elements:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   largest_ele(arr,n);
   
}
