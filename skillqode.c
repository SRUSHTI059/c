#include<stdio.h>
#include<string.h>

int main(){
    int i,j,k=0;
    char string1[25]={"SKILL"};
    char string2[30]={"QODE"};
    char string3[50];

    for(i=0;string1[i]!='\0';i++,k++){

        string3[k]=string1[i];
    }

    for(j=0;string2[j]!='\0';j++,k++){

        string3[k]=string2[j];
         
    }
 
 
      string3[k]='\0';   
      printf("%s",string3);
    
    return 0;
}