#include<stdio.h>
int main()
{
    int num;
    printf("Enter a decimal a number: ");
    scanf("%d",&num);

    //logic num should be divisible by 2 and remainder should 
    //stored in an array
    int i,q,a[1000];
    q=num;
    printf("Binary Number:\n");
    for(i=0;q>0;i++)
    {
        a[i] = q%2;
       
        q = q/2;
    }
    for(i=i-1;i>=0;i--)
    {
         printf("%d",a[i]);
    }
    return 0;
}