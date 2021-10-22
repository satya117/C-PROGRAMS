/*

pattern 1
-----------------
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    // 1.outer loop for rows
    // 2.inner loop for compile
    int row,col;
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            //what we need to print
            printf("* ");
        }
        printf("\n");
        
    }
    

    return 0;
}
