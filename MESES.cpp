#include <stdio.h>
#include <stdlib.h>
int n1;
int main()
{
    printf("Teclea un numero\n");
    scanf ("%d", & n1);
    switch (n1){
           case 1:
                {
                       printf("Naciste en Enero\n");
                break;
                }
           case 2:
                {
                       printf("Naciste en Febrero\n");
                break;
                }
           case 3:
                {
                       printf("Naciste en Marzo\n");
                break;
                }
           case 4:
                {
                       printf("Naciste en Abril\n");
                break;
                }
           case 5:
                {
                       printf("Naciste en Mayo\n");
                break;
                }
           case 6:
                {
                       printf("Naciste en Junio\n");
                break;
                }
           case 7:
                {
                       printf("Naciste en Julio\n");
                break;
                }
           case 8:
                {
                       printf("Naciste en Agosto\n");
                break;
                }
           case 9:
                {
                       printf("Naciste en Septiembre\n");
                break;
                }
           case 10:
                {
                       printf("Naciste en Octubre\n");
                break;
                }
           case 11:
                {
                       printf("Naciste en Noviembre\n");
                break;
                }
           case 12:
                {
                       printf("Naciste en Diciembre\n");
                break;
                }
           default:
                   {
                       printf("Introduce un numero del 1 al 12\n");
                       break;
                       }
}system ("PAUSE");
}
