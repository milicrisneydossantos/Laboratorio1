#include <stdio.h>
	int main()
	{
		float quantC;
		int CustoEsp, PrecoC;
		
		printf("Digite o Custo do espectaculo teatral: \n");
		scanf("%i", &CustoEsp);
		
		printf("Digite o preço do convite: \n");
		scanf("%i", &PrecoC);
		
		quantC = CustoEsp / PrecoC;
		
		printf("A quantidade de convites que devem ser vendidos para que, pelo menos, o custo do espetaculo seja alcançado e: %.1f \n", quantC);
		
		return 0;
	}