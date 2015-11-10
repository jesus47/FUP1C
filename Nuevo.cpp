#include<stdlib.h>
#include<stdio.h>
int main(){
int n, i,m, fin;
do{
printf(" Inserte el numero que desea evaluar: \n");
scanf("%d", &n);
}while (!(n>1));
fin=n;
i=2;
do{
if (n%i==0){
do{
n=(n/i);
printf("%d * ", i);
}while (!(n%i!= 0));
}
i=i+1;
} while (!(i>fin));
printf(" 1 ");
printf("\n");
system("pause");
} 
