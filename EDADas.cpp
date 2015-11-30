#include <stdio.h>
#include <stdlib.h>
 int edad;
 int main()
 
 {
 	printf("ingresa tu edad: ");
 	scanf("%d",&edad);
 	if (edad>=0 && edad <= 2)
 	{
 		printf ("eres un bebe\n");
 	}
	  else
	 {
	 if (edad >=2 && edad <=12)
	 {
	 	printf("Eres un chamaco\n");
	 }
	 else 
	 {
	 	if (edad >=13 && edad<=18)
	 	{
	 		printf("Eres un adolescente\n");
		 }
	
		else
		 {
		 	if (edad >=18 && edad <=29)
		 	{
		 		printf ("Eres un joven\n");
			 }
			 else 
			 {
			 if	(edad >= 29 && edad <=59 )
			 	{
			 		printf("Eres un respetable adulto\n");
				 }
				 else 
				 {
				 	if (edad >= 60)
				 	{
				 		printf ("Eres un viejo\n");
					 }
				 }
			 }
		 }
	 }
	 }
	 system ("PAUSE");
 }
