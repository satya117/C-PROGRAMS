#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int var1,var2,count=0;
     
     //finding the square root of num
     //ceil(x) return a number greater than or equal to the number in double format
     var1 = ceil(sqrt(num));
     var2 = num;
     //starting from 2 to test the divisibilty whether there exist any factors
     for(int i=2;i<=var1;i++)
     {
         if(var2%i==0)
            count++;
     }
     //checking the condition
     if((count==0 && var2!=1) || var2==2 || var2==3)
        printf("It's a Prime Number");
    else
        printf("Not a Prime Number");
    return 0;

}