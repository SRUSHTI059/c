#include<stdio.h>
int main()

{
   int i;
   for(i=65;i<90;i++)
   {
	   printf("%c\t",i);
	   printf("%c\t",i+34);
	   printf("%c\t",i+34-30);
	   printf("%c\t",i);
   }
   return 0;
}