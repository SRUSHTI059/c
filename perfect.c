#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter number =");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
            printf("%d ",i);
        }
    }
    printf("the sum of the divisor is = %d",sum);
    if(sum==n){
        printf("\nthe number is perfect .");
    }else{
        printf("\nthe number is not perfect");
    }
    printf("\n");
}