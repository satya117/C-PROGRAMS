#include<stdio.h>
int main()
{
    int binary;
    printf("Enter a binary number ");
    scanf("%d",&binary);
    int num = binary;
    int weight = 1,rem,decimal=0;
    while(num!=0)
    {
        rem=num%10;
        // mult each digit with 2^n based on position
        decimal = decimal+rem*weight;
        num = num/10;
        //mul the weight by 2 now
        weight = weight *2;
    }
    printf("Required decimal number is %d",decimal);
    return 0;
}