#include<stdio.h>

int main()
{
    int i,j,k=0;
    for(i=0;i<=5;i++){
        for(j=5;j>=i-1;j--){

            printf("  ");
        }
        for(k=0;k<=(2*i-i);k++){

            printf("  * ");
        }
        printf("\n");
    }

    return 0;
}