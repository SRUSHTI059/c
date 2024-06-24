#include<stdio.h>

struct Student{
    int rollno;
    int marks[5];
    int total;
    float per; 
};

int main(){
     struct Student student[3];
     
     for(int i=1;i<=3;i++){
        student[i].total=0;
        student[i].per=0;
        printf("enter %d roll no marks:\n",i);
        student[i].rollno=i;
            for(int j=0;j<5;j++){
                printf("enter marks :");
                scanf("%d",&student[i].marks[j]);
            }
            for(int j=0;j<5;j++){
                printf("%d\n",student[i].marks[j]);
                student[i].total+=student[i].marks[j];
                
            }
            student[i].per=student[i].total/5;
              printf("total is =%d\n",student[i].total);
              printf("percentage is =%f\n",student[i].per);
     }

     return 0;
}