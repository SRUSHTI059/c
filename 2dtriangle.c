#include<stdio.h>
int main(){
    int n,m;
    int upper=0,lower=0,diagonal=0;
    printf("enetr rows:");
    scanf("%d",&n);
    printf("enetr columns:");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter element of row %d & column %d =",i,j);
            scanf("%d\t",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(i<j){
             upper=upper+arr[i][j];

        }else if(i>j){
             lower=lower+arr[i][j];

        }else{
            diagonal=diagonal+arr[i][j];
        }
          printf("%d",arr[i][j]);
        }
        printf("\n");
       
    }
        printf("\nupper triangle total is :%d",upper);
        printf("\nlower triangle total is :%d",lower);
        printf("\ndiagonal total is :%d",diagonal);

    return 0;
}