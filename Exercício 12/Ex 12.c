#include <stdio.h>
	int main()
	{
		int n, n1, n2, n4, n5;
		
		do{
			printf(" Digite um numero de cinco digitos: \n");
			scanf("%i", &n);
			
			n1 = n / 10000;
			n2 = (n / 1000) % 10;
			n4 = (n % 1000) / 10;
			n5 = n % 10;
			
			if(n1 == n5 && n2 == n4 )
				printf(" O numero e palindromo");
			
		}while(n<10000 && n>99999);
		
		return 0;
	}