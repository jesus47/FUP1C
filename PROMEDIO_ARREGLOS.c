#include<stdio.h>
#include<stdlib.h>
float cal[10];
int i;
float promedio=0;
int main()
{
    printf("Programa que calcula el promedio de 10 calificaciones: \n\n");
    for(i=0;i<10;i++)
    {
                    printf("Dame la calificacion: %d\n",i+1);
                    scanf("%f" ,& cal[i]);
                    promedio+=cal[i];
                    printf("\n");
    }
    printf("El promedio de las calificaciones es \n\n%.2f", promedio/10);
    system("PAUSE");
}
