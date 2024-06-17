#include<stdio.h>
int main()

{
   int ascii;
   char upper,lower;
   printf("enter upper character:");
   scanf("%d",&upper);
   ascii=upper+32;
   printf("%c = %c",upper,ascii);
   return 0;
}