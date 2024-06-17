#include<stdio.h>

void area(){

      float pi=3.14;
      float r=25;
      float total_area;
      total_area=pi*r*r;
      printf("total area of circle is =%f\n",total_area);
}
      float area1(){
      float pi=3.14;
      float r=25;
      float total;
      total=pi*r*r;
      return total;
      }



int main(){
    area();

    float total;
    total=area1();
    printf("total = %f",total);
    return 0;
    
}