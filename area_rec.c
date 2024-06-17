#include<stdio.h>

void area(){

      float w=5.5;
      float h=10;
      float total_area;
      total_area=w*h;
      printf("total area of rectengle is =%f\n",total_area);
}
      float area1(){
      float w=5;
      float h=10;
      float total;
      total=w*h;
      return total;
      }



int main(){
    area();

    float total;
    total=area1();
    printf("total = %f",total);
    return 0;
    
}