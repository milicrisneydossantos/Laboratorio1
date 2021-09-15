#include <stdio.h>
	int main()
	{
		int n;
		
		do
		{
			printf(" Digite o valor: ");
			scanf("%i", &n);
			
			printf("O sucessor do numero digitado anteriormente sao: %i \n", n+1);
		}while(n>=0);
		
		return 0;
	}