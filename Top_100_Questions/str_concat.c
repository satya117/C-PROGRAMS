#include <stdio.h>
#include<string.h>
int main()
{
   char str1[100],str2[100];
   printf("Enter first string: \n");
   scanf("%s",str1);
   printf("Enter second string:\n");
   scanf("%s",str2);
   //using loops 
   int i,j;
   for(i=0;str1[i]!=0;i++);
   for(j=0;str2[j]!=0;j++,i++)
   {
       str1[i]=str2[j];
   }
   str1[i]='\0';
   printf("OUTPUT USING LOOPS:%s\n",str1);
   return 0;
   
}
