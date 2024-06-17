#include<stdio.h>

void area(){

      float p=20000;
      float r=5;
      float t=3;
      float total_amt;
      total_amt=(p*r*t)/100;
      printf("total simple interest is =%f\n",total_amt);
}
      float area1(){
      float p=10000;
      float r=2;
      float t=5;
      float total;
      total=(p*r*t)/100;
      return total;
      }



int main(){
    area();

    float total;
    total=area1();
    printf("total = %f",total);
    return 0;
    
}