#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    char str[100];

    printf("Sizeof int: %d\n",sizeof(a));
    printf("Sizeof float:%d\n",sizeof(b));
    printf("sizeof double:%d\n",sizeof(c));
    printf("sizeof char:%d\n",sizeof(d));
    printf("sizeof str:%d\n",sizeof(str));
    return 0;
}