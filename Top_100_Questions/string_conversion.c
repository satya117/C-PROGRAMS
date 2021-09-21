#include <stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("Enter a name to convert it into uppercase letter:\n");
    scanf("%s",name);
    int i;
    for(i=0;i<strlen(name);i++)
    {
        if(name[i]>=97 && name[i]<=122)
        //subtract 32 from the ascii value
        name[i] = name[i]-32;
    }
    printf("Upper case:%s",name);
    return 0;
}
