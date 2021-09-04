#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    int q=num;
    int r,sum=0;
    while(q!=0)
    {
        r = q%10;
        sum+=r;
        q = q/10;
    }
    printf("Sum of digit in Number:%d",sum);
    return 0;
}