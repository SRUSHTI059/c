  #include<stdio.h>

  int total_marks(){
          int marks[3];
          int total=0;
          for(int i=0;i<3;i++){
            printf("enetr marks of subject %d =",i);
            scanf("%d",&marks[i]);
            
            total+=marks[i];
          }

          return total;
  }
  float per(){
         int total=0;
         total= total_marks();
         float per=0.0;
        
         printf("total marks is = %d\n",total);
          per=total/3;
         return per;
  }

  void display(){
    
      float percentage=0.0;
      percentage=per();
      printf("total percentage is = %f\n",percentage);

  }

  int main(){
   
    display();
    return 0;
  }