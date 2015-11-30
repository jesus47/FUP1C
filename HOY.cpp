#include <stdio.h>
#include <stdlib.h>
int n1;
int i;
int suma = 0;
int main ()
{
    printf ("Escribe el digito");
    scanf ("%d", & n1);
    while (i <= 100)
    {
    suma = i *n1;
    i = i + 1;
 printf ("%d\n", suma);
    }   system ("PAUSE");
}
