#include<stdio.h>
int main()

{ 
   int a,b,c;
   printf("enter value of a=");
   scanf("%d",&a);
   printf("enter value of b=");
   scanf("%d",&b);
   printf("enter value of c=");
   scanf("%d",&c);
   a=a*b*c;
   c=a/b/c;
   b=a/b/c;
   a=a/b/c;
   printf("after swapping\na=%d\tb=%d\t%d",a,b,c);
   return 0;   
}