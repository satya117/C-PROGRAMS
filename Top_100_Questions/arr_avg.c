#include <stdio.h>
int arr_avg(int n,int arr[])
{
    int i,sum=0,avg;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg = sum/n;
    printf("Avg:%d",avg);
}
int main()
{
    int n;
    printf("No. of elements: \n");
    scanf("%d",&n);
    int arr[n];
    int i; 
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr_avg(n,arr);
    return 0;
}
