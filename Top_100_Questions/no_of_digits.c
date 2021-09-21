#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int q=n,count=0;
    while(q!=0)
    {
        q = q/10;
        count++;
    }
    printf("Number of digits:%d",count);
    return 0;
}
