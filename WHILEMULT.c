#include <stdio.h>
#include <stdlib.h>
float n1;
float n2;
float mul,suma;
float i;
int main ()
{
	printf("dame un numero\n");
	scanf("%f",&n1);
	printf("Dame otro numero\n");
	scanf("%f",&n2);
	mul = n1*n2;
	suma = 0;
	printf("El resultado multiplicado es %.2f \n", mul);
	for (i=1;  i <= n1;  i=i+1 )
	{
		suma=suma+n2;
		printf(" %.1f+", n2);
	}
	printf("=%.1f\n",suma);
	system ("PAUSE");
}
