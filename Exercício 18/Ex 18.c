#include<stdio.h>
	main()
	{
		char Nome_do_Cliente[3][60];
		int i, Quartos_do_Hotel = 3, diaria[30];
	
		for( i = 0; i < Quartos_do_Hotel; i++)
		{
			printf("Digite o nome do cliente para que seja registado:\n");
			scanf("%s", &Nome_do_Cliente[i]);
		
			printf("Digite a diaria do cliente: \n");
			scanf("%d", &diaria[i]);
		}
	
	   	float Conta_do_Cliente, Ganho_do_Hotel = 0.0;
		printf("\n");
		
		for( i = 0; i < Quartos_do_Hotel; i++)
		{
			Conta_do_Cliente = 0.0;
		
			if(diaria[i] < 15)
			{
				Conta_do_Cliente = (diaria[i] * 50.00) + (diaria[i] * 4.00);
			}else if(diaria[i] == 15)
			{
				Conta_do_Cliente = (diaria[i] * 50.00) + (diaria[i] * 3.60);
			}else
			{
				Conta_do_Cliente = (diaria[i] * 50.00) + (diaria[i] * 3.00);
			}
		
			printf("O cliente %s tem uma conta de %.2f USD\n", Nome_do_Cliente[i], Conta_do_Cliente);
			Ganho_do_Hotel += Conta_do_Cliente;
		}
	
		printf(" O ganho total do Hotel e: %.2f USD", Ganho_do_Hotel);
		
	}