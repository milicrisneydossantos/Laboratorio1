#include <stdio.h>
#include <math.h>
	int main()
	{
		float a, b, c, d, x1, x2, x;
		
		printf(" Digite o valor de A: \n");
		scanf("%f", &a);
		
		printf(" Digite o valor de B: \n");
		scanf("%f", &b);
		
		printf(" Digite o valor de C: \n");
		scanf("%f", &c);
		
		if (a!=0)
		{
			d = (pow(b,2)-4*a*c);
			if(d<0)
				printf(" Não tem soluçao! \n");
			else if(d==0)
			{
				x  = (-b + sqrt(d))/2*a;
				printf("Só tem uma soluçao e o seu valor e: %.1f \n", x);	
			}
			else if(d>0)
			{
				x1 = (-b + sqrt(d))/2*a;
				x2 = (-b - sqrt(d))/2*a;
				printf(" Tem duas soluçoes que sao: %.1f e %.1f \n", x1, x2);
			}
		}
	}