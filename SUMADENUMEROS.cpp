#include <stdio.h>
#include <stdlib.h>
int n1;
int i;
int suma;
int main ()
{
    printf ("Escribe el digito");
    scanf ("%d", & n1);
    while (i <= n1)
    {
          suma = suma + i;
          i = i + 1;
           
    } printf ("%d\n", suma);
    system ("PAUSE");
}
