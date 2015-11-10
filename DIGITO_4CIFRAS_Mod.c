#include <stdlib.h>
#include <stdio.h>
int num;
int res;
int dig;

int main()
{
	printf ("Programa que descompone una cifra de cuatro digitos \n");
	printf ("Dame el  numero a descomponer \n");
	scanf("%d", & num);
	if (num >= 10000)
	{
            printf("INTRODUCE CIFRA DE CUATRO DIGITOS\n");
            system ("PAUSE");
            exit (0);
            }
	printf ("Dame el numero\n");
	scanf ("%d",& dig);
    switch (dig )
     case 1: {
         num = num / 1000;
         printf ("El digito es: %d \n", num);
         break;
    case 2: {
         num = num % 1000;
         res = num / 100;
         printf ("El digito es: %d \n", res);
         break;
          case 3: {
         num = num % 100;
         res = num / 10;
         printf ("El digito es: %d \n", res);
         break;
           case 4: {
         num = num % 10;
         printf ("El digito es: %d \n", num);
         break;
             default:
            printf ("Introduce numero valido\n ");
            

}
}
}         
}system ("PAUSE");
}
