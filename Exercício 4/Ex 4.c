#include <stdio.h>
	int main()
	{
		float PA;
		float salariof, NovoSalario;
		
		printf("Digite o valor do Salario do Funcionario: \n");
		scanf("%f", &salariof);
		
		PA = (salariof * 25) / 100;
		NovoSalario = salariof + PA;
		
		printf(" O novo Salario do funcionario e: %.1f \n", NovoSalario);
		
		return 0;
	}