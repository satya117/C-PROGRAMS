#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int q=n,sum=0;
    for(int i=1;i<n;i++)
    {
        if(q%i==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    if(n==sum)
        printf("PERFECT NUMBER ");
    else
        printf("NOT A PERFECT NUMBER");
}