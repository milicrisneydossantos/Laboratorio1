#include <stdio.h>
	int main()
	{
		int fib, n1=0, n2=1, i;
		
		printf(" A sequencia fibbonacci e: \n");
		printf(" 0 1 ");
		
		for(i=2; i<20; i++)
		{
			fib = n1 + n2;
			n1 = n2;
			n2 = fib;
			printf(" %d ", fib);
		}   	
		return 0;
	}