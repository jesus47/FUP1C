#include<stdio.h>
#include<stdlib.h>
int dia1,dia2;
int mes1,mes2;
int a=-1;
int n,i;
int con=0;
int main()
{
 	printf("Ingresa el primer dia:");
	scanf("%d",& dia1);
    if(dia1>30)
  	{
    printf("Ingresa dia valido\n");
	system("PAUSE");
	exit(0);
	}
	printf("ingrese el primer mes:");
	scanf("%d",& mes1);
	if(mes1>12)
	{
	printf("Ingresa mes valido, del 1 al 12\n");	
	system("PAUSE");
	exit(0);
	}
	printf("ingrese el segundo dia:\n");
	scanf("%d",& dia2);
	if(dia2>=31)
	{
	printf("Ingresa dia valido\n");	
	system("PAUSE");
	exit(0);
	}
	printf("ingrese el segundo mes:");
	scanf("%d",& mes2);
	if(mes2>=13)
	{
	printf("Ingresa mes valido, del 1 al 12\n");	
	system("PAUSE");
	exit(0);
	}
    i=mes1;
	if(mes1==mes2)
	{
	a=0;
	}else{
	while(i<=mes2)
	{
    if(mes1==mes2)
	{
	}else
	{
	a=a+1;	
	i=i+1;
	}		
	}
	}
	n=a*30+dia2;
	do
	{
	if(dia1<=n)
	{
	con=con+1;
	}
	dia1=dia1+1;
	}while(dia1<=n);
	printf("los dias son %d\n",con-1);
system("PAUSE"); 
exit(0);
}     

