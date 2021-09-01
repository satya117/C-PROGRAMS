#include<stdio.h>
int main()
{

    int base,expo;
    printf("enter base and exponent to find the power");
    scanf("%d %d",&base,&expo);

    int exponent = expo;
    int num=1;
    if(expo>0)
    {
    while(expo!=0)
    {
        num=num*base;//numltiplying base based on expo
        expo--;
    }
    printf("Required number is :%d ",num);
    }
}