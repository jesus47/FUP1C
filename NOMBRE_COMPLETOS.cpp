#include <stdio.h>
#include <stdlib.h>
char nombre[50];
int i;
int main()
{
	printf("PROGRAMA QUE IMPRIME EL NOMBRE");
	printf("\n\nDame tu nombre\n ");
	gets(nombre);
	printf("%s\n", nombre);
	system("PAUSE");
} 

