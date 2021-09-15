#include <stdio.h>
	int main()
	{
		int soma = 0, i;
		
		for( i=0; i<500; i++)
		{
			if(i%2!=0 && i%3==0)
			{
					soma += i;
			}	
		}
		printf("A soma de todos os numeros impares que sao multiplos de 3 e que se encontra no conjunto de 1 ate 500 e: %i", soma);
		
		return 0;
	}