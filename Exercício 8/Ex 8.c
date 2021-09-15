#include <stdio.h>
	int main()
	{
		int NH, HT;
		float salariom, salariof, I, salariob;
		
		printf(" Digite o numero de horas de trabalho: \n");
		scanf("%i", &NH);
		
		printf(" Digite o valor do salario minimo: \n");
		scanf("%f", &salariom);
		
		HT = salariom/2;
		salariob = NH * HT;
		I = (salariob * 3) / 100;
		salariof = salariob - I;
		
		printf(" O salario a receber e: %.1f \n", salariof);

		return  0;
	}