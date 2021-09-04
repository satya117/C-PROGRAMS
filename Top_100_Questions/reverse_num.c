#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int q=num;
    int rem , rev_num;
    while(q!=0)
    {
        rem = q%10;
        rev_num = rev_num*10+rem;
        q = q/10;

    }
    printf("Reverse Number: %d",rev_num);
    return 0;
}