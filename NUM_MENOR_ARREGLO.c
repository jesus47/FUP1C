#include<stdio.h>
#include<stdlib.h>
int i,num[10];
int j=60000,k=60000;
int main()
{
    printf("PROGRAMA QUE TE DA EL NUMERO MENOR Y EL QUE LE SIGUE\n\n");
    for (i=0;i<10;i++)
    {
        printf("Dame el numero :%d ",i+1);
        scanf("%d", &num[i]);
    if (num[i]<j)
        {       
        j = num[i];
        } 
     }
    for(i=0;i<10;i++)
    {
    if (num[i]<k && num[i] != j)
    {
                 k = num[i];
    }
    } printf("EL NUMERO MENOR ES :%d", j);
      printf("\nEL NUMERO QUE LE SIGUE ES :%d",k);
system("PAUSE");
}
