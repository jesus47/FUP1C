#include <stdio.h>
#include <stdlib.h>
int num[10], aux[10],i=1, j = 1,n1=1;
int main ()
{
    printf("PROGRAMA QUE IMRPIME EL NUMERO MAYOR Y EL ANTERIOR\n");
    for (i=1; i<11; i++)
    {
              printf("Dame el digito :%d ", i);
              scanf("%d", & num[i]);
              if (num[i]>n1)
                               {
                                n1 = num[i];
                               }
                               }
    for (i=1;i<11;i++)
    {
              if (num [i]>j && num[i] < n1)
                               {
                                j = num[i];
                                }
    }
    printf("EL numero mayor es %d\n", n1 );
    printf("El numero que sigue es %d\n",j );
    system ("PAUSE");
}
