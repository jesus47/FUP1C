#include<stdio.h>
#include<stdlib.h>
int i,num[10],help=0,h,num1;
int j=60000,k=60000;
int main()
{
    printf("PROGRAMA QUE TE DA EL NUMERO MENOR Y EL QUE LE SIGUE\n\n");
    for (i=0;i<10;i++)
     {
        printf("Dame el numero :%d ",i+1);
        scanf("%d", &num[i]);
     }
        printf("Cuantos numeros ?");
       	scanf("%d", &num1);
       	help =0;
   	 for(h=0;h<num1;h++)
     {
     k=60000;
     for(i=0;i<10;i++)
     {
            if (num[i]<k && num[i] >help)
               {
               k = num[i];
               }
    } printf("EL NUMERO MENOR ES :%d \n", k);
      help = k;
}
system("PAUSE");
return 0;
}
