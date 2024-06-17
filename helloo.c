#include<stdio.h>
int main(){
      char alpha[5]={'H','E','L','L','O'};
      for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%c",alpha[j]);
        }
        printf("\n");
      }
      return 0;
}