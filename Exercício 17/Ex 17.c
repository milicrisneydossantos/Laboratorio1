#include<stdio.h>  
	int main()    
	{    
 	 	 int  fact = 1, n, i;   
	   
   	   	 printf(" Digite o numero: \n");    
       	 scanf("%d",&n); 
       	 
       	 printf("\n");

	 	 for(i=n; i>=1; i--)
		 {    
		 	if(i != 1){
			printf("%d x ", i);
			}else{
			printf("%d = ", i);
			}
			
	 	   	 fact *= i;    
	 	 }    
	 	 
 	 	 printf("Factorial de %d e: %d",n,fact);  
		     
 	  	 return 0;  
	}   