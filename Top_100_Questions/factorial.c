#include <stdio.h>

int fact(int num);
int main()
{
int a ;
scanf("%d",&a)
printf("The factorial of a is %d", fact(a));
return 0;
}
int fact(int num)
{
    if(num == 1)
return (1);
    else
    return (num * (num - 1));
}
