#include<stdio.h>
int main()
{
     
	  int n1,n2,i,j;
      printf("enter array length :");
      scanf("%d",&n1);
	  int number[n1];
      for(i=0;i<=n1;i++){
   		 printf("enter element of %d possition:",i);
         scanf("%d",&number[i]);
	  }
	  for(i=0;i<=n1;i++){
   		 printf("%d\t",number[i]);
	  }
	  printf("\nenter array length :");
      scanf("%d",&n2);
	  int marks[n2];
	  for(j=0;j<=n2;j++){
   		 printf("enter element of %d possition:",j);
         scanf("%d",&marks[j]);
	  }
	  for(j=0;j<=n2;j++){
   		 printf("%d\t",marks[j]);
	  }
     
	  
      return 0;	  
}	