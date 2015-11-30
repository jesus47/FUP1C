#include<stdio.h>
#include<stdlib.h>
int kilos;
int kilos2;
int kilos3;
int kilos4;
int main ()
{
	printf("dame los kilos");
	scanf("%d" ,&kilos);
	if (kilos>20)
{
    printf("No se lavara por negro\n");
}
else
{
    if(kilos >=16 && kilos<=20)
{
	printf("dame el tipo de ropa:\n 1 delicada\n 2 normal\n 3 sucia\n");
	scanf("%d" ,&kilos2);
	if(kilos2==1)
{ 
    printf("la ropa delicada se lavara 5 min con el maximo de agua\n");
}else
{
    if(kilos2==2)
{
    printf("la ropa normal se lavara 10 min con el maximo de agua\n");
}
else
{
    if(kilos2==3)
{
      printf("la ropa sucia se lavara 20 min con el maximo de agua\n");
{
		if(kilos2>=4)
	printf ("error al escribir");
}
}  
}
}
}
else
{
    if(kilos<=15 && kilos>=11)
{
    printf("dame el tipo de ropa:\n 1 delicada\n 2 normal\n 3 sucia\n");
    scanf("%d" ,&kilos3);
    if(kilos3==1)
{
    printf("la ropa delicada se lavara 5 min con el medio de agua\n");
}else
{
     if(kilos3==2)
{
     printf("la ropa normal se lavara 10 min con el medio de agua\n");
}else
{
     if(kilos3==3)
     printf("la ropa sucia se lavara 20 min con el medio de agua\n");
{
	if(kilos3>=4)
	printf ("error al escribir");
}
}
}
}else
{
     if(kilos<=10 && kilos>0)
{
     printf("dame el tipo de ropa:\n 1 delicada\n 2 normal\n 3 sucia\n");
     scanf("%d" ,&kilos4);
     if(kilos4==1)
{
     printf("la ropa delicada se lavara 5 min con el minimo de agua\n");  
}else
{
     if(kilos4==2)
{
     printf("la ropa normal se lavara 10 min con el minima de agua\n");
}else
{
     if(kilos4==3)
{
     printf("la ropa sucia se lavara 20 min con el minima de agua\n");
}
{
	if(kilos4>=4)
	printf ("error al escribir");
}
}
}
}
}
}
} 
}
