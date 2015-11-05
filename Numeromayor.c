#include<stdio.h>
#include<stdlib.h>
int a;
int b;
int main()
{
	printf("INSERTE EL PRIMER NUMERO\n");
	scanf("%d" ,&a);
	printf("INSERTE EL SEGUNDO NUMERO\n");
	scanf("%d" ,&b);
	if(a<=b)
{
	while(a<=b)
{
	printf("%d\n",a);
	a=a+1;
}
}
	else if (b<=a)
{
	while(b<=a)
{
	printf("%d\n",a);
	a=a-1;
}
}system ("PAUSE");
	return 0;
}
