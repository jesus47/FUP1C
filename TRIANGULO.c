#include <stdio.h>
#include <stdlib.h>
int n1;
int n2;
int n3;
int main()
{
    printf("Ingresa la primer medida\n");
    scanf("%d", & n1);
    printf("Ingresa la segunda medida\n");
    scanf("%d", & n2);
    printf("Ingresa la tercer medida\n");
    scanf("%d", & n3);
    if (n1 == n2 && n1 == n3 && n2 == n3)
    {
           printf("El triangulo es equilatero\n\n Tres lados iguales\n\nTres angulos iguales, todos 60°");
    }
    if (n1 == n2 && n1 != n3 || n1 != n2 && n1 == n3 || n2 == n3 && n1 != n2)
    {
           printf("El triangulo es isoceles\nDos lados iguales\nDos angulos iguales\n");
    }
    if (n1 != n2 && n1 != n3 && n2!= n3)
    {
           printf ("El triangulo es escaleno\nNo hay lados iguales\nNo hay angulos iguales\n");
    }system ("PAUSE");
}
