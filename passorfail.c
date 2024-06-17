#include<stdio.h>
int main()
{
    int a;
	printf("enter the year =");
	scanf("%d",&a);
	if(a%4==0){
	printf("%d year is leap year.");
	}
	else{
	printf("%d year is not leap year.");
	}
	return 0;
	

}