#include<stdio.h>
int main()
{
    // rows = 2rows-1 colums
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    int i,j;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=2*rows-1;j++)
        {
            if(j>=rows-(i-1) && j<=rows+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}