#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    //using if elseif and else condition
    if(a>b && a>c)
        printf("%d is greatest",a);
    else if(b>a && b>c)
        printf("%d is greatest",b);
    else
        printf("%d is greatest",c);
    
    printf("\n");
    //using ternary operator ?:
    (a>b && a>c)?printf("%d is greatest",a):(b>a && b>c)?printf("%d is greatest",b):printf("%d is greatest",c);
    return 0;
}