#include<stdio.h>
#include<stdlib.h>
int i;
int j;
int b;
int main()
{
    printf("Programa que muestra un rango\n");
	printf("Escribe el primer numero\n");
	scanf("%d" ,&i);
	printf("Escribe el segundo numero\n");
	scanf("%d" ,&b);
	if (i<b){
                    for (j=i; j<=b; j++)
                    {
                        printf("%d-",j);
                        }
                        } 
                    for (j=i; j>=b; j=j-1)
                    {
                        printf("%d-",j);
                    }system ("PAUSE");
}
