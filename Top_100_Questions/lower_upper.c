#include<stdio.h>
int main()
{
    char a,b;
    printf("Enter a Capital:");
    scanf("%c",a);
    printf("\nEnter a Small letter: ");
    scanf("%c",b);
    //conversion A-->a ===> A+32 = 97 as A=65 and a=32
    printf("\n%c Upper to Lower:%c",a,a+32);
    printf("\n%c Loweer to Upper:%c",b,b-32);
    return 0;
}