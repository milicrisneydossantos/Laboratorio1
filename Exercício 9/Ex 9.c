#include <stdio.h>
	int main()
	{
		float PesoS, quantG1, quantG2, Pesof;
		
		printf(" Digite o peso do saco da raçao: \n");
		scanf("%f", &PesoS);
		
		printf(" Digite a quantidade de raçao fornecida para cada gato: \n");
		scanf("%f%f", &quantG1, &quantG2);
		
		Pesof = PesoS - (((quantG1*5)+(quantG2*5))/1000);
		
		printf(" Apos cinco dias restara no saco: %.2f kilos \n", Pesof);
		
		return 0;
	}