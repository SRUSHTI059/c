#include<stdio.h>
int main(){
    int a=10;
    int b=20;

    int *p;
    int *q;

    p=&a;
    q=&b;

    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;

    printf("a=%d & b=%d",*p,*q);
}