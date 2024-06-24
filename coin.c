#include<stdio.h>
int main(){
    int coin1=1;
    int coin2=2;
    int coin3=5;
    int coin4=10;
    int coin5=20;
    int amt;
    printf("enter amount =");
    scanf("%d",amt);
    if(amt>38){
        printf("%d",amt-38);
    }else if(amt<=38){
        printf("%d",coin1);
    }
    return 0;
}
