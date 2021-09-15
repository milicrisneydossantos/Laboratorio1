#include <stdio.h>
	int main()
	{
		float salariom, KW, quantKW, R, D;

		printf(" Digite o valor do salario minimo: \n");
		scanf("%f", &salariom);
		
		printf(" Digite a quantidade de quilowatts consumida: \n");
		scanf("%f", &quantKW);
		
		KW = salariom/5;
		R = quantKW * KW;
		D = R - ((R * 15) / 100);
		
		printf(" O valor de cada quilowatt e: %.1f \n", KW);
		
		printf(" O valor a ser pago por essa residencia e: %.1f \n", R);
		
		printf(" O valor a ser pago com desconto de 15%% e: %.1f \n", D);
		
		return 0;
	}