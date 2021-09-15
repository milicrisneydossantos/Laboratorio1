#include <stdio.h>
	int main()
	{
		int AnodeNascimento, AnoActual, Idade, Idade2050;
		
		printf(" Digite o Ano de Nascimento e o Ano actual: \n");
		scanf("%i%i", &AnodeNascimento, &AnoActual);
		
		Idade = AnoActual - AnodeNascimento;
		Idade2050 = 2050 - AnodeNascimento;
				
		printf(" A idade dessa pessoa e: %i anos. \n", Idade);
		
		printf(" Em 2050 esta pessoa tera: %i anos de idade. \n", Idade2050);
		
		return 0;
	}