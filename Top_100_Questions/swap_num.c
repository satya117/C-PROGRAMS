#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 Numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nNumbers before swapping a=%d and b=%d",a,b);
    //creating temp variables
    int temp;
    //swapping using 3rd variable
    temp=a;
    a=b;
    b=temp;
    printf("\nNumbers after swapping a is %d and b is %d",a,b);
    //swapping without 3rd variable 
    a = a+b;
    b=a-b;
    a=a-b;
    printf("\nNumbers after swapping without using 3rd variavle: a is %d and b is %d",a,b);
    return 0;

}