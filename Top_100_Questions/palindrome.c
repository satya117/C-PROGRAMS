#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    //for later checking with the actual number
    int n = num;
    //pal = palindrome r = remainder
    int pal=0,r;
    //until n = 0 loop wil be running
    while(n!=0)
    {
        //get last digit
        r = n%10;
        //add it to the palindrome - to be mul*10 because to get into pos
        pal = pal*10+r;
        //getting remaing number
        n = n/10;
    }
    //compare with the actual number
    if(num==pal)
        printf("Number is a Palindrome");
    else
        printf("Not a Palindrome");
}