#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int q=num;
    //printf("%d",q);
// get the individual term and get the factor of indivial and adding up 
    int rem,mul=1,result=0;
    while(q!=0)
    {
        rem = q%10;
        for(int i=1;i<=rem;i++)
        {
            mul = mul *i;
        }
        result = result+mul;
        q=q/10;
        mul=1;
    }
    if(num == result)
        printf("Number is Strong Number");
    else
        printf("Not Strong NUmber");
        return 0;
}