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
		 if(num >= 10000 )
   { 
           printf ("Introduce una cifra de solo 4 digitos\n");
           system ("PAUSE");
           exit (0);
           }
	printf ("Dame el numero\n");
	scanf ("%d",& dig);

	while ( dig == 4 )
	{
	 num = num % 10;
         printf ("El digito es: %d \n", num);
         break;
         }
    while (dig == 3)
    {
         num = num % 100;
         res = num / 10;
         printf ("El digito es: %d \n", res);
    break;
   }
   while (dig == 2)
   {
          num = num % 1000;
         res = num / 100;
         printf ("El digito es: %d \n", res);
         break;
         }
   while (dig == 1)
   {
          num = num / 1000;
         printf ("El digito es: %d \n", num);
         break;
         }
   while ( dig >4 )
   {
        printf ("ERROR, INTRODUCE NUMERO VALIDO\n");
        break;
        }
  
   system ("PAUSE");
}
