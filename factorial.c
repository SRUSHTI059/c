#include<stdio.h>

int main(){
    int n;
    int fac=1;
    printf("enter number = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
          fac=fac*i;
        }
         printf("factorial is = %d",fac);
}