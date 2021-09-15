#include <stdio.h>
	int main()
	{
		float salariof, NovoSalario;
		int PA;
		
		printf("Digite o valor do Salario do Funcionario: \n");
		scanf("%f", &salariof);
		
		printf("Digite o valor do percentual de aumento: \n");
		scanf("%i", &PA);
		
		NovoSalario = salariof + ((salariof * PA)/100);
		
		printf(" O novo Salario do funcionario e: %f \n", NovoSalario);
		
		return 0;	
	}