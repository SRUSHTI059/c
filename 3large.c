#include<stdio.h>

int main()

{
   float a,total,charged_amt;
   printf("enter customer units =");
   scanf("%f",&a);
   if(a<=100){
	total=a*0.60+50;   
	printf("total amount is =%f",total);
    if(total>300)
    charged_amt=total*15/100;
    printf("total charged amount =%f",charged_amt);
   }else if(a<=200){
	total=a*0.80+50;   
	printf("total amount is =%f",total);
    if(total>300)
    charged_amt=total*15/100;
    printf("total charged amount =%f",charged_amt);
   }else if(a>=300)
	total=a*0.90+50;   
	printf("total amount is =%f",total);
    if(total>300)
    charged_amt=total*15/100;
    printf("total charged amount =%f",charged_amt);   
    }	
   return 0;
}	
	