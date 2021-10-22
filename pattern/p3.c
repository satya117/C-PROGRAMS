/*

pattern 3
----------


* * * *
* * *
* *
*


*/

int main()
{
    int n;
    scanf("%d",&n);
    int row,col;
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");
        
    }
    

    return 0;
}
