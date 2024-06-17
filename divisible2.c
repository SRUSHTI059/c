#include<stdio.h>
int main()
{
  int a;
  printf("enter value of a =");
  scanf("%d",&a);
  if(a%5==0 && a%3==0){
  printf("a=%d is divisible by 5&3",a);}
  else{
  printf("a=%d is not divisible by 5&3",a);}
  return 0;
}