#include <stdio.h>
	int main()
	{
		int i, n, quantI=0, quantP=0, somaP=0, somaI=0;
		float mediaI=0.0, mediaP=0.0;
		
		for(i=1; i<10; i++)
		{	
			printf("digiite um numero: ");
			scanf("%i", &n);
			
			
			if(n%2==0)
			{
				somaP += n;
				quantP++;
			}else
			{
				somaI += n;
				quantI++;
			}	
			system("cls");
		} 
		mediaP = somaP / quantP;
		mediaI = somaI / quantI;		

		printf("A media dos numeros pares e: %.1f \n", mediaP);
		printf("A media dos numeros Impares e: %.1f \n", mediaI);
		
		return 0;   	
	}