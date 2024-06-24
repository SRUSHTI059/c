#include<stdio.h>

float si(float p,float r,float t){
    return (p*r*t)/100;
}
int main(){        
    float total;
    total=si(1000.50,2.5,3.0);
    printf("total simple interest is =%f",total);
    return 0;
}