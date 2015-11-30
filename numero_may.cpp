#include<stdio.h>
#include<stdlib.h>
int i;
int b;
int main()
{
    printf("Programa que muestra un rango\n");
	printf("Escribe el primer numero\n");
	scanf("%d" ,&i);
	printf("Escribe el segundo numero\n");
	scanf("%d" ,&b);
	if(i<=b)
{
	while(i<=b)
{
	printf("%d\n",i);
	i=i+1;
}
}
	else if (b<=i)
{
	while(b<=i)
{
	printf("%d\n",i);
	i=i-1;
}
}system ("PAUSE");
	return 0;
}
