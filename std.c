#include <stdio.h>

int main(){
      int student[3];
	  int subject[5];
	  int total=0;
	  for(int i=0;i<3;i++){
	  printf("enter student roll no :");
	  scanf("%d",&student[i]);
	      for(int j=0;j<5;j++){
		    printf("enter marks %d :",j);
			scanf("%d",&subject[j]);
			
		  }
		  
		    printf(" student roll no is:%d\n",student[i]);
		   for(int j=0;j<5;j++){
		    printf("%d\n",subject[j]);
			total+=subject[j];
			
		  }
		   printf("total is: %d\n",total);
		   
		   
	  
	   }
	  
	  return 0;
}  