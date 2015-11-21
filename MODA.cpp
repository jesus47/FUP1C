#include <stdio.h>
#include <stdlib.h>
  int numeros[10];
    int contador=0;
    int auxiliar[10];
    int posicion=0;
    int numero=0;
    int contador2=0;
    int mayor=0;
    int posicionmayor=0;
    int bandera=0;
    float suma=0;
int main()
{
    printf("PROGRAMA QUE TE MUESTRA LA MODA DE DIEZ NUMEROS\n\n");
    for(contador=0;contador<10;contador++) {
        printf("Escribe el digito %d : ",contador+1);
        scanf(" %d",&numeros[contador]);
    }
    printf("Elementos :\n");
    for(contador=0;contador<10;contador++) {
        printf(" %d",numeros[contador]);
    }
    for(contador=0;contador<10;contador++) {
        auxiliar[contador]=0;
    }
    for(contador=0;contador<10;contador++) {
        numero = numeros[contador];
        posicion = contador;
        for(contador2=contador;contador2<10;contador2++) {
            if(numeros[contador2]==numero) auxiliar[posicion]++;
        }
    }
    mayor=auxiliar[0];
    posicionmayor = 0;
    for(contador=0;contador<10;contador++) {
        if(auxiliar[contador]>mayor) {
            posicionmayor=contador;
            mayor=auxiliar[contador];
        }
    }
   printf("\nLa moda es  : %d \n",numeros[posicionmayor]);
system("PAUSE");
}
