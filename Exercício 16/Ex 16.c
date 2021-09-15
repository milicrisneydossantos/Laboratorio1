#include <stdio.h>
	int main()
	{
		int altura[15], menor=0, maior=0, i;
		
		for(i=0; i<15; i++)
		{
			printf(" Digite a altura na posicao: [%i] = ", (i+1));
			scanf("%i", &altura[i]);
		}
		for(i=0; i<15; i++)
		{
			if (i==0)
			{
				menor = altura[i];
				maior = altura[i];
			}
			else if(altura[i]<menor)
				menor = altura[i];
			else if(altura[i]>maior)
				maior = altura[i];
		}
		printf(" A menor altura do grupo e: %i cm \n", menor);
		
		printf(" A maior altura do grupo e: %i cm \n", maior);
		
		return 0;
	}