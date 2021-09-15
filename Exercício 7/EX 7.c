#include <stdio.h>
	int main()
	{
		float PrecoFabrico, LC, I, PFV;
		int PL, PI;
		
		printf(" Digite o preço de frabrica de um veiculo: \n");
		scanf("%f", &PrecoFabrico);
		
		printf(" Digite o percentual de lucro do distribuidor: \n");
		scanf("%i", &PL);
		
		printf(" Digite o percentual de iimposto: \n");
		scanf("%i", &PI);
		
		LC = (PrecoFabrico * PL) / 100;
		I = (PrecoFabrico * PI) / 100;
		PFV = LC + I + PrecoFabrico;
		
		printf(" O valor correspondente ao lucro do consumidor e: %.1f \n", LC);
		
		printf(" O valor correspondente ao Imposto e: %.1f \n", I);
		
		printf(" O preço final do veiculo e: %.1f \n", PFV);
		
		return 0;
	}