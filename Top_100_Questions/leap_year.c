#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year to be checked");
    scanf("%d",&year);

    if(year%400==0 || year%4==0)
    {
        printf("Leap Year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}