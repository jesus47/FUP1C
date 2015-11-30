#include <stdio.h>
#include <stdlib.h>
  int cal[10];
    int i=0;
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
    for(i=0;i<10;i++) 
    {
        printf("Escribe el digito %d : ",i+1);
        scanf(" %d",&cal[i]);
    }    
    for(i=0;i<10;i++) {
        auxiliar[i]=0;
    }
    for(i=0;i<10;i++) {
        numero = cal[i];
        posicion = i;
        for(contador2=i;contador2<10;contador2++) {
            if(cal[contador2]==numero) auxiliar[posicion]++;
        }
    }
    mayor=auxiliar[0];
    posicionmayor = 0;
    for(i=0;i<10;i++) {
        if(auxiliar[i]>mayor) {
            posicionmayor=i;
            mayor=auxiliar[i];
        }
    }
   printf("\nLa moda es  : %d \n",cal[posicionmayor]);
system("PAUSE");
}
