#include<stdio.h>

void area(){

      float l=25;
      float total_area;
      total_area=l*l;
      printf("total area of squre is =%f\n",total_area);
}
      float area1(){
      float l=10;
      float total;
      total=l*l;
      return total;
      }



int main(){
    area();

    float total;
    total=area1();
    printf("total = %f",total);
    return 0;
    
}