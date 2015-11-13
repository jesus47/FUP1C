#include<stdio.h>
#include<stdlib.h>
int i;
int j;
int b;
int suma;
int n1;

int main()
{
	printf ("Programa que suma numeros pares hasta n1\n\n");
	printf("Dame un numero\n");
	scanf("%d", & n1);
	for (j=0; j<=n1; j=j+2)
				{
					suma = j + suma;
				}	printf ("%d\n", suma);
				system("PAUSE");
}
