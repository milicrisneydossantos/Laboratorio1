#include <stdio.h>
	int main()
	{
		int lado, A;
		
		printf(" Digite o valor dos lados do quadrado: \n");
		scanf("%i", &lado);	
		
		A = lado * lado;
		printf(" O valor da Area do quadrado e: %d ", A);
		
		return 0;
	}