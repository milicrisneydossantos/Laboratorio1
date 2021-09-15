#include <stdio.h>
	int main()
	{
		float salariom, salariof; 
		int quantsm;
		
		printf(" Digite o valor do salario minimo: \n");
		scanf("%f", &salariom);
		
		printf(" Digite o valor do salario do funcionario: \n");
		scanf("%f", &salariof);
		
		quantsm = salariof / salariom;
		
		printf(" A quantidade de salarios minimos que o funcionario ganha e: %d \n", quantsm);
		
		return 0;
	}