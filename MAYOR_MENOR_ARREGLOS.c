# include <stdio.h>
# include <stdlib.h>
int i=0, j=0,num[20],mayor=0;
int main()
{
    printf("PROGRAMA QUE ORDENA LOS NUMEROS\n\n");
    for(i=0; i<20; i++)
    {
        printf("Introduce el numero #%d: ",i+1);
        scanf("%d",&num[i]);
        for(j=0; j<20; j++)
         {
        if(num[i] >= num[j])
            {
                mayor=num[i];
                num[i]=num[j];
                num[j]=mayor;
            }
         }
    }
for(i=0; i<20; i++)
{
         printf("%d\n",num[i]);
}
system("pause");
}
