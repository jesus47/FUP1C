#include <stdio.h>
#include <stdlib.h>
int n1; 
int n2;
int n3;
int prod1;
int gan;
int gan2;
int gan3;
int gan4;
int gan5;
int var1;
int prod2;
int prod3;
int prod4;
int prod5;
int cigarros;
int refrescos;
int tortas;
int maruchan;
int jugos;
int main ()
{
    printf("Presiona 1 si deseas comprar.\nPresiona 2 si deseas ver ganancias.\n");
    scanf("%d",& n1);
    if (n1==1){
    printf (" 1 Cigarros $4\n 2 refrescos $10\n 3 tortas $13\n 4 maruchan $11\n 5 jugos $6\n");
    scanf("%d", &n2);
    switch (n2)
    {
             case 1: {
                 printf ("indique la cantidad de los productos\n");
                 scanf("%d",&prod1);
                 cigarros = 4 * prod1;
                 printf("El total es : %d\n", cigarros);
                 printf("Desea ver ganancias?\n Presiona 1\n Presiona 2 para salir\n");
                 scanf("%d", &gan);
                 if (gan == 1)
                 printf ("El total es %d\n",500 + cigarros);
                 break;
                   } 
           case 2 :{ 
                printf ("indique la cantidad de los productos\n");
                scanf("%d", & prod2);
                refrescos=10*prod2;
                printf ("El total es : %d\n",refrescos);
                     printf("Desea ver ganancias?\n Presiona 1\n Presiona 2 para salir\n");
                 scanf("%d", &gan2);
                 if (gan2 == 1)
                 printf ("El total es %d\n",500 + refrescos);
                break;
                }
           case 3 :{ 
                printf ("indique la cantidad de los productos\n");
                scanf("%d",&prod3);
                tortas=13*prod3;
                printf("El total es : %d\n", tortas);
                     printf("Desea ver ganancias?\n Presiona 1\n Presiona 2 para salir\n");
                 scanf("%d", &gan3);
                 if (gan3 == 1)
                 printf ("El total es %d\n",500 + tortas);
                break;
                }
            case 4 :{ 
                printf ("indique la cantidad de los productos\n");
                scanf("%d",&prod4);
                maruchan=11*prod4;
                printf ("El total es : %d\n", maruchan);
                     printf("Desea ver ganancias?\n Presiona 1\n Presiona 2 para salir");
                 scanf("%d", &gan4);
                 if (gan4 == 1)
                 printf ("El total es %d\n",500 + maruchan);
                break;
                }
            case 5 :{ 
                printf ("indique la cantidad de los productos\n");
                scanf("%d",&prod5);
                jugos=6*prod5;
                printf ("El total es : %d\n", jugos);
                     printf("Desea ver ganancias?\n Presiona 1\n Presiona 2 para salir\n");
                 scanf("%d", &gan5);
                 if (gan5 == 1)
                 printf ("El total es %d\n",500 + jugos);
                break;
                }
                default: printf ("Escribe un numero valido\n");
}
}
if (n1 == 2)
     {
      printf("Las ganancias iniciales son 500 pesos\n");
      }
      else
      {
      if (n1 >= 3)
          {
             printf("Inserta numero valido.\n");
             }
             }      
system ("PAUSE");
}
