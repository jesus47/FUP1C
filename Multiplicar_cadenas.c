#include <stdio.h>
#include <stdlib.h>
int a[10];
int b[10];
int i,j,k,l,suma;
int main()
{
printf("PROGRAMA QUE MULTIPLICA CADA VECTOR\n\n");
	for (i=0;i<10;i++)
		{
			printf("Vector 1\n");
			printf("Dame el numero #%d ",i+1);
			scanf("%d", &a[i]);
			system("CLS");
		}
	for (j=0;j<10;j++)
		{
			printf("Vector 2\n");
			printf("Dame el numero #%d", j+1);
			scanf("%d", &b[j]);
			system("CLS");
		}
	for (i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		l = a[i] * b[j];
		printf("%d\n", l);
		}
	}
	system("PAUSE");
	return 0;
}
