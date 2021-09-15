#include<stdio.h>
	int main()
	{
		float altura_do_Juca = 110, altura_do_Chico = 150;
		int anos = 0;
	
	
		while(altura_do_Chico > altura_do_Juca)
		{
			altura_do_Chico += 2;
			altura_do_Juca += 3;
			anos++;
		}
	
		printf(" Para que Juca seja maior que Chico serão necessários %d anos.", anos);
		
		return 0;
	}