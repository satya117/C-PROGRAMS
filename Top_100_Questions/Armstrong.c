#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    //store the value for comp
    int q = num;
    //to count the number of digits
    int count=0;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    //Multilplying individual number
    q=num;
    //printf("%d\n",q);
    int cnt=count,res=0,mul=1,rem;
    while(q!=0)
    {
        rem=q%10;
        while(cnt!=0)
        {
            mul=mul*rem;
            cnt--;
        }
        //printf("%d\n",mul);
        res = res+mul;
        cnt=count;
        q=q/10;
        mul=1;   
    }
    //printf("%d",res);
    if(res == num)
        printf("Number is Armstrong Number");
    else
        printf("Not an Armstrong Number");
    return 0;
}