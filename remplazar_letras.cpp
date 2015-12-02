#include <stdio.h>
#include <stdlib.h>
char car;
char nuevocar;
char palabra[25];
int main()
{
	printf("PROGRAMA QUE REMPLAZA LAS LETRAS\n");
	printf("Ingresa la palabra\n");
	scanf("%s",palabra);
	printf("Ingrese la letra que quiere reemplazar "); 
	scanf (" %c",&car); 
	printf("Ingrese la letra por la que va a reemplazarla "); 
	scanf (" %c",&nuevocar); 
	for(int i=0;i<25;i++) 
	{ 
		if(palabra[i]==car) 
		{	 
			palabra[i]=nuevocar; 
		
		}	 
			
	}	  
	printf("La nueva palabra es %s\n\n",palabra);	 	
	system ("PAUSE");
	return 0;
}
