#include<stdio.h>
int main()
{
    int array[2][2];
    int arr[3][3];
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("enter element of row : %d & column : %d =",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",array[i][j]);
            sum=sum+array[i][j];
        }
        printf("\n");
       
    }
     printf("total = %d",sum);
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\nenter element of row : %d & column : %d =",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("\n");
        
    }
       printf("total = %d",sum);
    return 0;
}