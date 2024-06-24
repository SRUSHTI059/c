#include<stdio.h>
#include<string.h>

int reverse(){
    int number[20];
    int i;
    int j=0;
    
    gets(number);
    for(i=0;number[i]!='\0';i++){
        j++;
    }
    printf("total length is :%d\n",i);

    for(i=0;number[i]!='\0';i++){
        printf("%c",number[j-1]);
        j--;
    }
    }


int main(){
    reverse();
    return 0;
}