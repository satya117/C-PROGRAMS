#include<stdio.h>
int main()
{
    int n;
    printf("Get the series upto: ");
    scanf("%d",&n);
    int a=0,b=1,result=0;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        result =a+b;
        a=b;
         b=result;

    }
    return 0;
}