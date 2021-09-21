#include <stdio.h>
#include<string.h>
int main()
{
   char str[100];
   printf("Enter a string:\n");
   scanf("%s",str);
   int i;
   //traversing through out the str till we find '\0'(null) char
   for(i=0;str[i]!='\0';i++);
   printf("lenght of the string:%d",i);
   //using strlen func
   printf("LENGHT OF THE STRING:%d",strlen(str));
   return 0;
}
