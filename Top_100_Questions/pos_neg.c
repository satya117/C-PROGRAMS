#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    //checking entered number is + or -
    if(num>0)
        printf("POSITIVE NUMBER");
    else 
        printf("NEGATIVE NUMBER");
    
    return 0;
}